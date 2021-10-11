/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:31:17 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 17:03:35 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s);
	while (size > 0)
	{
		if (s[size] == c)
			return ((char *) s + size);
		size--;
	}
	if (s[size] == '\0' && c == '\0') // TODO A verifier
		return ((char *) s + size);
	return (0);
}
