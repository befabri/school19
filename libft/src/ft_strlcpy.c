/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:28:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 17:03:44 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;

	c = 0;
	if (dstsize > 0)
	{
		while (src[c] != '\0' && c < dstsize - 1)
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}