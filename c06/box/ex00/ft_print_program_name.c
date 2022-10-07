/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:21:26 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 18:48:42 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str);

int	main(int argc, char **argv)
{
	argc = 0;
	putstr(argv[0]);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] !='\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
