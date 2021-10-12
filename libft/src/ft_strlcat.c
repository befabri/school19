/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:35:50 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/12 11:35:49 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	size_src;
	size_t	size_dest;

	c = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dst);
	if (dstsize == 0)
		return (size_src);
	while (src[c] != '\0' && size_dest + c < (dstsize - 1))
	{
		dst[size_dest + c] = src[c];
		c++;
	}
	dst[size_dest + c] = '\0';
	if (dstsize > size_dest)
		return (size_dest + size_src);
	return (dstsize + size_src);
}
