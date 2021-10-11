/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:44:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 17:14:13 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*s_tmp;
	unsigned int	i;

	s_tmp = (char *) s;
	i = 0;
	while (s_tmp[i] != '\0' && i < n)
	{
		if (s_tmp[i] == c)
			return ((char *) s_tmp + i);
		i++;
	}
	if (s_tmp[i] == '\0' && c == '\0') // TODO A verifier
		return ((char *) s_tmp + i);
	return (0);
}
