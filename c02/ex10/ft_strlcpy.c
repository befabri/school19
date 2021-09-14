/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:43:33 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/14 10:47:03 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (size > 0)
	{
		while (src[c] != '\0' && c < size - 1)
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}

int	main(void)
{
	char			source[] = "moulinette";
	char			destination[] = "phraseasupprimer";
	unsigned int	size;
	unsigned int	size_destination;
	unsigned int	i;
	
	size = 20;
	printf("Source -> %s\n", source);
	printf("Destination -> %s\n", destination);
	unsigned int a = ft_strlcpy(destination, source, size);
	printf("----- AFTER ft_strcpy -----\n");
	printf("Size src return: %d\n", a);
	printf("Destination -> %s\n", destination);
	size_destination = sizeof(destination);
	i = 0;
	while(i<size_destination)
	{
		if(destination[i] == '\0') {
			destination[i] = '|';
		}
		printf("%c",destination[i]);
		i++;
	}
	printf("\n");
	return (0);
}
