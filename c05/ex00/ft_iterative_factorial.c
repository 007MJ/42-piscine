/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:04:27 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 20:00:49 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	same;

	same = nb;
	i = 1;
	if (nb <= 0)
	{
		if (nb == 0)
		{
			return (1);
		}
		return (0);
	}
	while (i != nb)
	{
		same = same * (nb - i);
		i++;
	}
	return (same);
}
