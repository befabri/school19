/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:57:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/12 12:12:37 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b;
	int		i;
	unsigned char c_char;

	i = 0;
	b_str = (char *) b;
	c_char = (unsigned char) c;
	while (len >= 0)
	{
		b_str[i] = c_char;
		i++;
		len--;
	}
	printft("b_str: %s", b_str);
	return (b);
}