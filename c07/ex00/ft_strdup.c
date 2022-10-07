/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 01:45:03 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/05 11:18:01 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	stlenght( char *str)
{
	int	i;
	i = 0;
	while (str[i] !='\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (dest[i] != '\0')
	{
		i++; 
	}
	while (src[index] != '\0')
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	char *ptr;
	int size_string;

	size_string = stlenght(src);
	ptr = (char*)malloc (size_string * sizeof(*ptr));

	if (ptr == NULL)
	{
		return 0;
	}
	else
	{
		ptr	= ft_strcat(ptr, src);
		return (ptr);
	}
}

int	main(void)
{
	char source [] = "hello world";

	char* target = ft_strdup(source);

	printf("%s", target);

	return (0);
}
