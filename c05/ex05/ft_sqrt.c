/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:19:44 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/05 12:46:33 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	if (nb <= 0)
		return (0);
	while (square * square != nb)
	{
		if (square > nb / square)
			return (0);
		square++;
	}
	if (square * square == nb)
		return (square);
	return (0);
}
