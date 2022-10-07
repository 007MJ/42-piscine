/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:12:15 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/05 19:28:36 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	*ptr;
	int	size_range;
	if( min >= max)
		return (0);


	size_range = max - min ;
	ptr = (int*)malloc(size_range * sizeof(ptr));

	if(ptr == NULL)
	{
		return (-1);
	}
	else
	{
		i = 0;
		while (i < size_range)
		{
			ptr[i] =  min;
			i++;
			min++;
		}
		*range = ptr;
		return (i);
	}
}

int main(void)
{
	int *range;
	int min  = 10;
	int max = 30;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	//printf("%d\n", *range[0]);
}
