/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:27:34 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/09 17:06:48 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*copy;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	i = 0;
	size = ft_strlen(s);
	copy = (char *) malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (0);
	while (s[i] != '\0')
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[size] = '\0';
	return (copy);
}
