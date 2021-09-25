/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:08:42 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 20:08:46 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insert_row(int tab[6][6], int *list, int col)
{
	int	r;

	r = 0;
	while (r + 1 <= 4)
	{
		tab[r + 1][col] = list[r];
		r++;
	}
}

void	insert_col(int tab[6][6], int *list, int row)
{
	int	c;

	c = 0;
	while (c + 1 <= 4)
	{
		tab[row][c + 1] = list[c];
		c++;
	}
}
