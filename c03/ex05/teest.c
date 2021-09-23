/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:40:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/22 14:59:33 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	size_src;
	unsigned int	size_dest;

	c = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0)
		return (size_src);
	while (src[c] != '\0' && c < (size - size_dest - 1))
	{
		dest[size_dest + c] = src[c];
		c++;
	}
	dest[size_dest + c] = '\0';
	if (size > size_dest)
		return (size_dest + size_src);
	return (size + size_src);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	test_dst[30] = "hello you";
	char	test_src[] = "everyone is cool";
	
	unsigned int size_ft_strlcat = ft_strlcat(test_dst, test_src, 3);
	printf("Size -> %d \n", size_ft_strlcat);
	printf("ft_strlcat-> %s \n", test_dst);
	printf("\n");
	return (0);
}
