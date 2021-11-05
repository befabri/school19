/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 04:14:19 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/05 04:44:08 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	ft_nbrlen(int nb)
{
	int		i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	int		len;
	char	*copy;

	printf("|%d ", n);
	len = ft_nbrlen(n);
	printf(">%d< ", len);
	copy = (char *) malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (0);
	*copy = 0;
	copy[len] = '\0';
	len--;
	while (len >= 0)
	{
		copy[len] = '0' + n % 10;
		n = n / 10;
		len--;
	}
	if (n < 0)
		copy[0] = '-';
	printf("%s|", copy);
	return (copy);
}