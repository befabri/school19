/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:44:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 02:02:02 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	size_t			i;

	s_tmp = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s_tmp[i] == (unsigned char) c)
			return ((void *) s_tmp + i);
		i++;
	}
	return (0);
}
