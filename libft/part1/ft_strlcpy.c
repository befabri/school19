/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:28:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 19:51:24 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char * restrict dst, const char * restrict src, unsigned int dstsize)
{
	unsigned int	c;

	c = 0;
	if (dstsize > 0)
	{
		while (src[c] != '\0' && c < dstsize - 1)
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "moulinette";
	char	destination[] = "phraseasupprimer";

	printf("Source -> %s\n", source);
	printf("Destination -> %s\n", destination);
	ft_strcpy(destination, source);
	printf("----- AFTER ft_strcpy -----\n");
	printf("Destination -> %s\n", destination);
	int size_destination = sizeof(destination);
	int i = 0;
	while(i<size_destination)
	{
		if(destination[i] == '\0') {
			destination[i] = '|';
		}
		printf("%c",destination[i]);
		i++;
	}
	return (0);
}
