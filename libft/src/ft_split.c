/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:36:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 03:14:53 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(const char *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int	malloc_error(char **copy)
{
	size_t	i;

	i = 0;
	while (copy[i])
	{
		free(copy[i]);
		i++;
	}
	free(copy);
	return (0);
}

static int	cut_str(char **copy, size_t size, char const *s, char c)
{
	size_t	i;
	size_t	nb;
	int		start;

	i = 0;
	nb = 0;
	start = -1;
	while (i <= size)
	{
		if (start == -1 && s[i] != c)
			start = i;
		if (start != -1 && (i == size - 1 || s[i] == c))
		{
			if (i == size - 1 && s[i] != c)
				i++;
			copy[nb] = ft_substr(s, start, i - start);
			if (!copy[nb])
				return (malloc_error(copy));
			nb++;
			start = -1;
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;
	size_t	nb;
	size_t	size;

	if (!s)
		return (0);
	nb = count_str(s, c);
	size = ft_strlen(s);
	copy = (char **) malloc(sizeof(char *) * (nb + 1));
	if (copy == NULL)
		return (0);
	if (!cut_str(copy, size, s, c))
		return (0);
	copy[nb] = '\0';
	return (copy);
}
