/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:34:40 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 16:50:38 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	int		i;
	int		size_s1;
	int		size_set;
	int		d;

	size_s1 = ft_strlen(s1);
	size_set = ft_strlen(set);
	if (s1[0] == '\0' || set[0] == '\0')
		return (0);
	copy = (char *) malloc(sizeof(char) * (size_s1 + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	*copy = 0;
	while (i < size_s1)
	{
		d = 0;
		if (s1[i] == set[0])
		{
			while (s1[i + d] == set[d])
			{
				d++;
				if (d == size_set)
					find = 1;
			}
		}
		copy[i] = s1[i];
		i++;
	}
	copy[size_s1 + 1] = '\0';
	return (copy);
}

#include <stdio.h>

int	main(void)
{
	const char *test = "Phrase de test aled";

	printf("-> %s \n", ft_substr(test, 15, 4));
	return (0);
}