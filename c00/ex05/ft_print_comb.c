/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:04:03 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/11 16:37:43 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb(char first, char second, char third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (first != '7' || second != '8' || third != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '1';
	third = '2';
	while (first <= '7' && second <= '8' && third <= '9')
	{
		if (first != second && second != third)
		{
			ft_put_comb(first, second, third);
		}
		third++;
		if (third == '9' + 1)
			third = second++ + 1;
		if (second == '8' + 1)
			second = first++ + 1;
	}
}
