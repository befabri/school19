/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 13:41:52 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == '\f' || c == '\t' || c == ' '
		|| c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	c;
	long	nb;
	long	sign;

	c = 0;
	nb = 0;
	sign = 1;
	while ((str[c] != '\0') && is_space(str[c]) == 1)
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		nb = nb * 10 + (str[c] - '0');
		c++;
	}
	return (nb * sign);
}
