/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:20:55 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:57:59 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	size_t			c;

	s1_tmp = (unsigned char *) s1;
	s2_tmp = (unsigned char *) s2;
	if (n == 0)
		return (0);
	c = 0;
	while (c < n)
	{
		if (s1_tmp[c] != s2_tmp[c])
			return (s1_tmp[c] - s2_tmp[c]);
		c++;
	}
	return (0);
}
