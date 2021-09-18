/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:21:56 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/13 10:05:14 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_rows_columns(int x, int y, int c, int r)
{
	if ((c == 1) && (r == 1 || r == y))
		ft_putchar('A');
	else if ((c == x) && (r == 1 || r == y))
		ft_putchar('C');
	else if ((c == 1 || c == x) || (r == 1 || r == y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		while (r <= y)
		{
			c = 1;
			while (c <= x)
			{
				ft_put_rows_columns (x, y, c, r);
				c++;
			}
			ft_putchar('\n');
			r++;
		}
	}
}
