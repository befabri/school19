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

bool	check(char a, char b)
{

	if (a != b)
	{
		continue;
	}
	else
	{
		return false;
	}
	return true;
}

void	ft_print_comb(int n)
{
	char tab[n];
	int compteur;

	compteur = 1;

	while (++compteur < n)
	{
		tab[compteur] = compteur;
	}

	while (n >= 1 && tab[0] <= (10 - n))
	{
		while (compteur<n)
		{
			check(tab[0], tab[compteur]);
		}

		tab[n]++;
		if (tab[n] == '9' + 1)
			tab[n] = tab[n-1]++ + 1;
		if (second == '8' + 1)
			second = first++ + 1;
	}
}

int	main(void)
{
	ft_print_comb(2);
	return (0);
}

