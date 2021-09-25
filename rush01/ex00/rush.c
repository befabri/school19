/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:01:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 21:20:53 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	check_side(int tab[6][6])
{
	int	list4[4];
	int	listr4[4];
	int	c;

	c = 0;
	while (c < 4)
	{
		list4[c] = c + 1;
		listr4[c] = 4 - c;
		c++;
	}
	c = 0;
	while (c + 1 <= 4)
	{
		if (tab[0][c + 1] == 4)
			insert_row(tab, list4, c + 1);
		else if (tab[5][c + 1] == 4)
			insert_row(tab, listr4, c + 1);
		if (tab[c + 1][0] == 4)
			insert_col(tab, list4, c + 1);
		else if (tab[c + 1][5] == 4)
			insert_col(tab, listr4, c + 1);
		c++;
	}
}

int	loop_row(int tab[6][6])
{
	int	r;
	int	res1;
	int	res2;
	int	res3;

	res1 = 0;
	res2 = 0;
	res3 = 0;
	r = 1;
	while (r <= 4)
	{
		res1 = check_row(tab, r, tab[r][0]);
		res2 = check_row_reverse(tab, r, tab[r][5]);
		res3 = check_missing_number_row(tab, r);
		if (res1 || res2 || res3)
			return (1);
		r++;
	}
	return (0);
}

int	loop_column(int tab[6][6])
{
	int	c;
	int	res1;
	int	res2;
	int	res3;

	res1 = 0;
	res2 = 0;
	res3 = 0;
	c = 1;
	while (c <= 4)
	{
		res1 = check_column(tab, c, tab[0][c]);
		res2 = check_column_reverse(tab, c, tab[5][c]);
		res3 = check_missing_number_col(tab, c);
		if (res1 || res2 || res3)
			return (1);
		c++;
	}
	return (0);
}

void	rush(char *str)
{
	int	tab[6][6];
	int	res1;
	int	res2;

	if (ft_strlen(str) != 31)
	{
		ft_putstr("Error\n");
		return ;
	}
	init_array(tab);
	if (!ft_split_arg_loop(str, tab))
	{
		ft_putstr("Error\n");
		return ;
	}
	check_side(tab);
	res1 = 1;
	res2 = 1;
	while (res1 || res2)
	{
		res1 = loop_row(tab);
		res2 = loop_column(tab);
	}
	display_array(tab);
}
