/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:35:33 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/03 08:45:03 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int cashier_a, int cashier_b)
{	
	if (cashier_b > 1)
		write(1, ", ", 2);
	ft_putchar(cashier_a / 10 + 48);
	ft_putchar(cashier_a % 10 + 48);
	ft_putchar(' ');
	ft_putchar(cashier_b / 10 + 48);
	ft_putchar(cashier_b % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	cashier_a;
	int	cashier_b;

	cashier_a = 0;
	cashier_b = 0;
	while (cashier_a < 98)
	{
		cashier_b = cashier_a + 1;
		while (cashier_b < 99)
		{
			ft_print_number(cashier_a, cashier_b);
			cashier_b++;
		}
		cashier_a++;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//}
