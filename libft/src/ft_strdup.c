/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:19:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/03 03:59:20 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	size;
	size_t	i;

	size = ft_strlen(src);
	copy = (char *) malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	*copy = 0;
	while (i < size)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
