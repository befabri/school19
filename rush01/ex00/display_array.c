/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:38:51 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 19:47:17 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	display_array(int tablo[6][6])
{
	int	r;
	int	c;

	r = 0;
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			ft_putchar(tablo[r][c] + 48);
			if (c != 5)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
