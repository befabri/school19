/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:57:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 02:19:52 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_str;
	unsigned char	c_char;
	size_t			i;

	i = 0;
	b_str = (unsigned char *) b;
	c_char = (unsigned char) c;
	while (len)
	{
		b_str[i] = c_char;
		i++;
		len--;
	}
	return (b);
}
