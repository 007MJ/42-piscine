/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:43:12 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 20:24:04 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
