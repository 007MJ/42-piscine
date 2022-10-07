/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/09/26 09:11:26 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 0 && str[i -1] <= 47)
				|| (str[i -1] >= 58 && str[i - 1] <= 64)
				|| (str[i -1] >= 91 && str[i -1] <= 96)
				|| (str[i - 1] >= 123 && str[i - 1] <= 126))
			{
				str[i] -= 32;
			}	
		}
		i++;
	}
	return (str);
}
