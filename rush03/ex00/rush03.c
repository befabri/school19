/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:21:56 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 14:00:26 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	filling_rows_columns(int x, int y, int c, int r)
{
	if ((r == 1 || r == y) && (c == 1))
	{
		ft_putchar('A');
	}
	else if ((r == 1 || r == y) && (c == x))
	{
		ft_putchar('C');
	}
	else if ((r == 1 || r == y) || (c == 1 || c == x))
	{
		ft_putchar('B');
	}	
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	if (x <= 0 || y <= 0)
		write(1, "ERROR : x and y must be int and greater than 0 !\n", 50);
	else
	{
		while (r <= y)
		{
			c = 1;
			while (c <= x)
			{
				filling_rows_columns (x, y, c, r);
				c++;
			}
			ft_putchar('\n');
			r++;
		}
	}
}
