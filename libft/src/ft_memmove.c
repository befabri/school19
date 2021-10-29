/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:41:35 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/29 16:56:37 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_tmp;
	char	*dst_tmp;

	if (!dst && !src)
		return (0);
	src_tmp = (char *) src;
	dst_tmp = (char *) dst;
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
