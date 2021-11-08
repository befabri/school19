/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:57:00 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/08 02:46:16 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;

	if (n == 0)
		return (0);
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c] && c < n - 1)
	{
		 c++;
	}
	return (((unsigned char *)s1)[c] - ((unsigned char *)s2)[c]);
}
