
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:41:51 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/09/28 08:09:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	unsigned int	i;
	unsigned int	index;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	index = 0;
	while (src[index] != '\0' && index < nb)
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[i] = '\0';
	return (dest);
}
