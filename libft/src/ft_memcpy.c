/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:28:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 17:03:08 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*src_tmp;
	char			*dst_tmp;
	unsigned int	i;

	if (!dst && !src)
		return (0);
	src_tmp = (char *) src;
	dst_tmp = (char *) dst;
	i = 0;
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (dst);
}
