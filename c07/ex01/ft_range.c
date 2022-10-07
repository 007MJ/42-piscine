/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:41:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/05 14:22:39 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max)
{
	if (min >= max)
		return (0);

	int size_number;

	size_number = max -min;

	int*	ptr;

	ptr = (int*) malloc (size_number *sizeof(int));

	if (ptr == 0)
	{
    return (0);
	}
	else
	{
		int i;

		i= 0;
		while( i < size_number)
		{
			ptr[i] = i + min;
			i++;
		}
		return (ptr);
	}
}

int main (void)
{
	int *tab;
	tab = ft_range(5, 10);

	int i; 
	i = 0;
	while (tab[i] < 10)
	{
		printf("%d", tab[i]);
		tab[i]++;
	}
}
