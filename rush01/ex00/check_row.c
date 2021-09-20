/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:16:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 22:35:49 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int tab[6][6], int row, int side_int)
{
	int	c;
	int	cpt;

	cpt = 0;
	c = 1;
	while (c <= 4)
	{
		if (tab[row][c] != 0)
			cpt++;
		else if (tab[row][c - 1] != 0 && cpt < 5 && c - 1 != 0)
		{
			if ((tab[row][c] == 0 && cpt + 1 == side_int) ||
				(tab[row][c + 1] != 0 && cpt + 2 == side_int))
			{
				if (tab[row][c - 1] + 1 < 5)
				{
					tab[row][c] = tab[row][c - 1] + 1;
					return (1);
				}
			}
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
	while (c >= 1)
	{
		if (tab[row][c] != 0)
			cpt++;
		else if (tab[row][c + 1] != 0 && cpt < 5 && c + 1 != 5)
		{
			if ((tab[row][c] == 0 && cpt + 1 == side_int) ||
				(tab[row][c - 1] != 0 && cpt + 2 == side_int))
			{
				if (tab[row][c + 1] + 1 < 5)
				{
					tab[row][c] = tab[row][c + 1] + 1;
					return (1);
				}
			}
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
	while (r <= 4)
	{
		if (tab[r][col] != 0)
			cpt++;
		else if (tab[r - 1][col] != 0 && cpt < 5 && r - 1 != 0)
		{
			if ((tab[r][col] == 0 && cpt + 1 == side_int) ||
				(tab[r + 1][col] != 0 && cpt + 2 == side_int))
			{
				if (tab[r - 1][col] + 1 < 5)
				{
					tab[r][col] = tab[r - 1][col] + 1;
					return (1);
				}
			}
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
	while (r >= 1)
	{
		if (tab[r][col] != 0)
			cpt++;
		else if (tab[r + 1][col] != 0 && cpt < 5 && r + 1 != 5)
		{
			if ((tab[r][col] == 0 && cpt + 1 == side_int) ||
				(tab[r - 1][col] != 0 && cpt + 2 == side_int))
			{
				if (tab[r + 1][col] + 1 < 5)
				{
					tab[r][col] = tab[r + 1][col] + 1;
					return (1);
				}
			}
		}
		r--;
	}
	return (0);
}
