/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:21:33 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	nb;
	int	signe;

	nb = 0;
	c = 0;
	signe = 1;
	while (str[c] == '\f' || str[c] == '\t' || str[c] == '\n'
		|| str[c] == '\r' || str[c] == '\v' || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			signe *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		nb = nb * 10 + (str[c] - '0');
		c++;
	}
	return (nb * signe);
}
