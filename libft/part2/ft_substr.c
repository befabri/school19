/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:11:56 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:35:07 by bfabri           ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, unsigned int len) // TODO verifier si \0 ce passe quoi dois ton break.... verfier taille malloc
{
	char	*copy;
	unsigned int		i;
	int		size_str;

	size_str = ft_strlen(s);
	if (start < 0 || size_str < start)
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

#include <stdio.h>

int	main(void)
{
	const char	*test = "Phrase de test aled";

	printf("-> %s \n", ft_substr(test, 15, 4));
	return (0);
}
