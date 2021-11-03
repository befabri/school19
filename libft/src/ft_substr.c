/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:11:56 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/03 04:24:56 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	size_str;

	if (ft_strlen(s) < start)
		return (0);
	size_str = ft_strlen(s + start);
	if (!s || size_str < start)
		return (0);
	copy = (char *) malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (0);
	*copy = 0;
	ft_strlcpy(copy, s + start, len + 1);
	return (copy);
}
