/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:43:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/09/24 17:47:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temporary;

	i = 0;
	temporary = 0;
	while (i < size)
	{
		temporary = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temporary;
		i++;
		size--;
	}
}
