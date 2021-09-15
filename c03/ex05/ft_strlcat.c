/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:40:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/15 17:42:30 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) // TODO
{
	unsigned int	c;
	unsigned int	dest_size;

	c = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
    dest[dest_size + c] = '\0';

    return dest;
}

#include <stdio.h>

int	main(void)
{
	char	word1[] = "hello";
	char	word2[] = "everyone";
	char *destination = ft_strncat(word1, word2, 2);
	printf("-> %s \n", destination);
	printf("\n");
	return (0);
}
