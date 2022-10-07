/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:52:47 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 20:07:10 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{	
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
