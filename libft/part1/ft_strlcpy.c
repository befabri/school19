/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:28:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:51:15 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *restrict dst, const char *restrict src, unsigned int dstsize)
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

// #include <stdio.h>
// #include <bsd/string.h>

// // gcc ft_strlcpy.c -l bsd && ./a.out
// int	main(void)
// {
// 	char			source[] = "moulinette";
// 	char			destination[] = "phraseasupprimer";
// 	unsigned int	size;
// 	unsigned int	size_destination;
// 	unsigned int	i;

// 	size = 5;
// 	printf("Source -> %s\n", source);
// 	printf("Destination -> %s\n", destination);
// 	unsigned int a = strlcpy(destination, source, size);
// 	printf("----- AFTER ft_strcpy -----\n");
// 	printf("Size src return: %d\n", a);
// 	printf("Destination -> %s\n", destination);
// 	size_destination = sizeof(destination);
// 	i = 0;
// 	while(i<size_destination)
// 	{
// 		if(destination[i] == '\0') {
// 			destination[i] = '|';
// 		}
// 		printf("%c",destination[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
