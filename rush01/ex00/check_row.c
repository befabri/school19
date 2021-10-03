/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:16:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/26 00:23:04 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_exist_row_nb(int tab[6][6], int row, int nb)
{
	int	c;

	c = 1;
	while (c <= 4)
	{
		if (tab[row][c] == nb)
			return (1);
		c++;
	}
	return (0);
}

int	is_exist_column_nb(int tab[6][6], int col, int nb)
{
	int	r;

	r = 1;
	while (r <= 4)
	{
		if (tab[r][col] == nb)
			return (1);
		r++;
	}
	return (0);
}

int	check_row(int tab[6][6], int row, int side_int)
{
	int	c;
	int	cpt;

	cpt = 0;
	c = 1;
	if (side_int == 1 || side_int == 4)
		return (0);
	while (c <= 4)
	{
		if (tab[row][c] != 0)
			cpt++;
		else
		{
			if (cpt + 1 == side_int && !is_exist_row_nb(tab, row, tab[row][c - 1] + 1))
			{
				tab[row][c] = tab[row][c - 1] + 1;
				return (1);
			}
			return (0);
		}
		c++;
	}
	return (0);
}

int	check_row_reverse(int tab[6][6], int row, int side_int)
{
	int	c;
	int	cpt;

	cpt = 0;
	c = 4;
	if (side_int == 1 || side_int == 4)
		return (0);
	while (c >= 1)
	{
		if (tab[row][c] != 0)
			cpt++;
		else
		{
			if (cpt + 1 == side_int && !is_exist_row_nb(tab, row, tab[row][c + 1] + 1))
			{
				tab[row][c] = tab[row][c + 1] + 1;
				return (1);
			}
			return (0);
		}
		c--;
	}
	return (0);
}

int	check_column(int tab[6][6], int col, int side_int)
{
	int	r;
	int	cpt;

	cpt = 0;
	r = 1;
	if (side_int == 1 || side_int == 4)
		return (0);
	while (r <= 4)
	{
		if (tab[r][col] != 0)
			cpt++;
		else
		{
			if (cpt + 1 == side_int && !is_exist_column_nb(tab, col,  tab[r - 1][col] + 1))
			{
				tab[r][col] = tab[r - 1][col] + 1;
				return (1);
			}
			return (0);
		}
		r++;
	}
	return (0);
}

int	check_column_reverse(int tab[6][6], int col, int side_int)
{
	int	r;
	int	cpt;

	cpt = 0;
	r = 4;
	if (side_int == 1 || side_int == 4)
		return (0);
	while (r >= 1)
	{
		if (tab[r][col] != 0)
			cpt++;
		else
		{
			if (cpt + 1 == side_int && !is_exist_column_nb(tab, col,  tab[r + 1][col] + 1))
			{
				tab[r][col] = tab[r + 1][col] + 1;
				return (1);
			}
			return (0);
		}
		r--;
	}
	return (0);
}
