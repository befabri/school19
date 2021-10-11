/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:41:35 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 17:04:29 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*src_tmp;
	char			*dst_tmp;
	unsigned int	i;

	if (!dst && !src)
		return (0);
	src_tmp = (char *) src;
	dst_tmp = (char *) dst;
	i = 0;
	while (i < len)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (dst);
}
