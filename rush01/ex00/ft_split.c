/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:42:35 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 20:09:47 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	*ft_split_arg(int *dest, char *src, unsigned int n)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (src[c] != '\0' && d < n)
	{
		if (src[c] != ' ' && (src[c] < '0' || src[c] > '9'))
			return (0);
		if (src[c] != ' ')
		{
			dest[d] = src[c] - '0';
			d++;
		}		
		c++;
	}
	return (dest);
}

int	ft_split_arg_loop(char *str, int tab[6][6])
{
	int		dst[16];
	int		*res;
	int		i;
	int		index;

	i = 0;
	index = 0;
	while (i < 4)
	{
		res = ft_split_arg(dst, str + i * 4 * 2, 4);
		if (res == 0)
		{
			return (0);
		}
		if (i % 2)
			index = 5;
		else
			index = 0;
		if (i < 2)
			insert_col(tab, res, index);
		else
			insert_row(tab, res, index);
		i++;
	}
	return (1);
}
