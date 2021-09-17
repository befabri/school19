/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:40:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/17 10:08:34 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;
	unsigned int	m;

	m = 0;
	c = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[c] != '\0')
	{
		c++;
	}
	if (size == 0)
	{
		return (i);
	}
	while (src[m] != '\0' && m < (size - c - 1))
	{
		dest[c + m] = src[m];
		m++;
	}
	dest[m] = '\0';
	if (size > c)
		return (c + i);
	return (size+i);
}

unsigned int	casse(char *dest, const char *src, unsigned int destsize)
{
	unsigned int m;
	unsigned int n;
	unsigned int p;

	m = 0;
	n = 0;
	p = 0;
	while (src[p] != '\0')
	{
		p++;
	}
	while (dest[n] != '\0')
	{
		n++;
	}
	if (destsize == 0)
		return (p);
	while ((src[m] != '\0') && ((n + m) < (destsize - 1)))
	{
		dest[n + m] = src[m];
		m++;
	}
	dest[n + m] = '\0';
	if (destsize > n)
		return (n + p);
	return (destsize + p);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word1[] = "hello";
	char	word2[] = "hello";
	char	word3[] = "everyone";
	char	word4[] = "everyone";

	unsigned int	size_ft_strlcat = ft_strlcat(word1, word3, sizeof(word1)+8);
	unsigned int	size_strlcat = casse(word2, word4, sizeof(word2)+8);
	printf("ft_strlcat-> %d \n", size_ft_strlcat);
	printf("strlcat-> %d \n", size_strlcat);
	printf("ft_strlcat-> %s \n", word1);
	printf("strlcat-> %s \n", word2);
	printf("\n");
	return (0);
}
