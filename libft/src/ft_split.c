/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:36:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/09 15:22:00 by bfabri           ###   ########.fr       */
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

static void	cut_str(char **copy, size_t size, char const *s, char c)
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
			nb++;
			start = -1;
		}
		i++;
	}
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
	cut_str(copy, size, s, c);
	copy[nb] = '\0';
	return (copy);
}
