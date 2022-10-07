
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:56:48 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 20:13:46 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
