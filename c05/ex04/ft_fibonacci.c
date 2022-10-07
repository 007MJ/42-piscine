/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:36:44 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 20:28:04 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	int	nb;

	nb = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{	
		nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (nb);
	}
}
