/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:34:40 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:22:44 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(char const *s1, char const *set, int i, int size_set)
{
	int	d;

	d = 0;
	while (s1[i + d] == set[d])
	{
		d++;
		if (d == size_set)
			return (d);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	i;
	size_t	size_s1;
	size_t	size_set;
	int		c;

	size_s1 = ft_strlen(s1);
	size_set = ft_strlen(set);
	if (s1[0] == '\0' || set[0] == '\0')
		return (0);
	copy = (char *) malloc(sizeof(char) * (size_s1 + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	*copy = 0;
	c = 0;
	while (i < size_s1)
	{
		if (s1[i] == set[0])
			i += test(s1, set, i, size_set);
		copy[c] = s1[i];
		i++;
		c++;
	}
	copy[c] = '\0';
	return (copy);
}
