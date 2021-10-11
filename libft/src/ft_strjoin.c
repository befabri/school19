/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:19:48 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 22:32:20 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_size;
	unsigned int	s2_size;
	unsigned int	i;
	unsigned int	c;
	char			*copy;

	if (!s1 || !s2)
		return (0);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	copy = (char *) malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	c = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		copy[i] = s2[c];
		i++;
		c++;		
	}
	copy[i] = '\0';
	return (copy);
}
