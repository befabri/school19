/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:36:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 10:44:47 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_countchar(const char *s, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

/*
Alloue (avec malloc(3)) et retourne un tableau
de chaines de caracteres obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.
*/
char **ft_split(char const *s, char c)
{
	char	**copy;
	int		i;
	int		nb;
	int		j;
	char	*copy_tmp;
	if (!c)
		return (0);
	nb = ft_countchar(s, c);
	copy = (char **) malloc(sizeof(char) * nb);
	if (copy == NULL)
		return (0);
	i = 0;
	*copy = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = i;
			copy_tmp = (char *) malloc(sizeof(char) * (j + 1));
			
			if (copy_tmp == NULL)
				return (0);
			
			nb++;
			j = 0;
		}
		i++;
	}
	return (copy);
}