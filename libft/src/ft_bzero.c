/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:49:33 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 02:04:41 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_tmp;
	size_t			c;

	if (n < 1 )
		return ;
	s_tmp = (unsigned char *) s;
	c = 0;
	while (c < n)
	{
		s_tmp[c] = '\0';
		c++;
	}
}
