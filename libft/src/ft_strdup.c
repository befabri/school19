/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:19:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 17:04:22 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src) // CHECK CONST
{
	char	*copy;
	size_t	size;
	size_t	i;

	size = ft_strlen(src);
	copy = (char *) malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
