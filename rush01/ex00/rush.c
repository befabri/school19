/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:01:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 01:00:48 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

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
			ft_putchar(tablo[r][c]+48);
			if (c != 5)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

void	init_array(int tablo[6][6])
{
	int	r;
	int	c;

	r = 0;
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			tablo[r][c] = 0;
			c++;
		}
		r++;
	}
}

int	*ft_split_arg(int *dest, char *src, unsigned int n)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (src[c] != '\0' && d < n)
	{
		if (src[c] != ' ')
		{
			dest[d] = src[c] - '0';
			d++;
		}		
		c++;
	}
	return (dest);
}

void	insert_row(int tab[6][6], int *list, int col, int offset_min, int offset_max)
{
	int	r;

	r = 0;
	while (offset_min <= offset_max)
	{
		tab[offset_min][col] = list[r];
		r++;
		offset_min++;
	}
}

void	insert_col(int tab[6][6], int *list, int row, int offset_min, int offset_max)
{
	int	c;

	c = 0;
	while (offset_min <= offset_max)
	{
		tab[row][offset_min] = list[c];
		c++;
		offset_min++;
	}
}

void	rush(char *str, int row, int column)
{
	int		tablo[row][column];
	int		dst[16];
	int		*res;

	init_array(tablo);
	
	res = ft_split_arg(dst, str+0*4*2, 4);
	insert_col(tablo, res, 0, 1, 4);
	res = ft_split_arg(dst, str+1*4*2, 4);
	insert_col(tablo, res, 5, 1, 4);
	res = ft_split_arg(dst, str+2*4*2, 4);
	insert_row(tablo, res, 0, 1, 4);
	res = ft_split_arg(dst, str+3*4*2, 4);
	insert_row(tablo, res, 5, 1, 4);

	display_array(tablo);
}
