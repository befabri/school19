/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:51:27 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/07 19:51:27 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_combn(int nb)
{
	if (nb >= 10)
	{
		ft_put_combn(nb / 10);
		ft_put_combn(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		while ()
	}
}

int	main(void)
{
	ft_print_combn(2);
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}
