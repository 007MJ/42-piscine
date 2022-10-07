/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:41:41 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/09/19 11:39:52 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char hundred, char ten, char unite)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unite, 1);
	if (hundred != '7')
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unite;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = (hundred + 1);
		while (ten <= '8')
		{
			unite = (ten + 1);
			while (unite <= '9')
			{
				ft_printchar(hundred, ten, unite);
				unite++;
			}
			ten++;
		}
		hundred++;
	}
}
