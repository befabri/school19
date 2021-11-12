/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:41:35 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 01:59:23 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;

	if (!dst && !src)
		return (0);
	src_tmp = (unsigned char *) src;
	dst_tmp = (unsigned char *) dst;
	if (dst > src)
	{
		while (0 < len)
		{
			dst_tmp[len - 1] = src_tmp[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
