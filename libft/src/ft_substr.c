/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:11:56 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/09 01:44:25 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	size_str;

	if (s == NULL)
		return (0);
	if (ft_strlen(s) < start)
	{
		copy = (char *) malloc(sizeof(char) * 1);
		if (copy == NULL)
			return (0);
		*copy = 0;
		return (copy);
	}
	size_str = ft_strlen(s + start);
	if (size_str < len)
		len = size_str;
	copy = (char *) malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (0);
	ft_strlcpy(copy, s + start, len + 1);
	return (copy);
}
