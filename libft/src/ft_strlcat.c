/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:35:50 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:37:41 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	size_src;
	size_t	size_dest;

	c = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0)
		return (size_src);
	while (src[c] != '\0' && size_dest + c < (size - 1))
	{
		dest[size_dest + c] = src[c];
		c++;
	}
	dest[size_dest + c] = '\0';
	if (size > size_dest)
		return (size_dest + size_src);
	return (size + size_src);
}
