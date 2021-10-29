/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:11:56 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/29 17:08:43 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;
	size_t	size_str;

	size_str = ft_strlen(s);
	if (size_str < start)
		return (0);
	copy = (char *) malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	*copy = 0;
	while (len > 0)
	{
		copy[i] = s[start];
		len--;
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
