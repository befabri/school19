/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:49:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/29 17:01:46 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	d;

	if (needle[0] == '\0')
		return ((char *) haystack);
	c = 0;
	while (haystack[c] != '\0' && c < len)
	{
		d = 0;
		if (haystack[c] == needle[0])
		{
			while (c + d < len && haystack[c + d] == needle[d])
			{
				d++;
				if (needle[d] == '\0')
					return ((char *) haystack + c);
			}
		}
		c++;
	}
	return (0);
}
