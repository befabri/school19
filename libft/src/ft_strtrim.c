/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:34:40 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 03:11:19 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (is_set(s1[c], set))
	{
		c++;
	}
	if (c == ft_strlen(s1))
	{
		copy = (char *) malloc(sizeof(char) * 1);
		copy[0] = 0;
		return (copy);
	}
	i = ft_strlen(s1) - 1;
	while (is_set(s1[i], set))
	{
		i--;
	}
	copy = ft_substr(s1, c, i - c + 1);
	return (copy);
}
