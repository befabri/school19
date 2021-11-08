/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 04:14:19 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/08 02:07:43 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_len(long nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*copy;
	long	nb;

	nb = (long) n;
	size = ft_nb_len(nb);
	copy = (char *) malloc(sizeof(char) * size + 1);
	if (copy == NULL)
		return (0);
	if (nb == 0)
		copy[size - 1] = '0' + nb % 10;
	if (nb < 0)
	{
		copy[0] = '-';
		nb *= -1;
	}
	copy[size] = '\0';
	while (nb > 0)
	{
		copy[size - 1] = '0' + nb % 10;
		nb /= 10;
		size--;
	}
	return (copy);
}
