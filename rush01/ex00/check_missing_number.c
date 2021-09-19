/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_missing_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:05:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 20:35:20 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_last_free_col(int tab[6][6], int size, int col)
{
	int	total;
	int	r;

	r = 1;
	total = ((size - 1) + 1) * ((size - 1) + 2) / 2;
	while (r <= 4)
	{
		total -= tab[r][col];
		r++;
	}
	return (total);
}

int	check_last_free_row(int tab[6][6], int size, int row)
{
	int	total;
	int	c;

	c = 1;
	total = ((size - 1) + 1) * ((size - 1) + 2) / 2;
	while (c <= 4)
	{
		total -= tab[row][c];
		c++;
	}
	return (total);
}

int	check_missing_number_row(int tab[6][6], int row)
{
	int	c;
	int	cpt;
	int	index;

	cpt = 0;
	c = 1;
	while (c <= 4)
	{
		if (tab[row][c] == 0)
		{
			index = c;
			cpt++;
		}
		c++;
	}
	if (cpt == 1)
	{
		tab[row][index] = check_last_free_row(tab, 4, row);
		return (1);
	}
	return (0);
}

int	check_missing_number_col(int tab[6][6], int col)
{
	int	r;
	int	cpt;
	int	index;

	cpt = 0;
	r = 1;
	while (r <= 4)
	{
		if (tab[r][col] == 0)
		{
			index = r;
			cpt++;
		}
		r++;
	}
	if (cpt == 1)
	{
		tab[index][col] = check_last_free_col(tab, 4, col);
		return (1);
	}
	return (0);
}
