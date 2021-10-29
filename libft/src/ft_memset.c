/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:57:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/29 16:57:16 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*b_str;
	int				i;
	unsigned char	c_char;

	i = 0;
	b_str = (char *) b;
	c_char = (unsigned char) c;
	while (len)
	{
		b_str[i] = c_char;
		i++;
		len--;
	}
	return (b);
}
