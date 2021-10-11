/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:28:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:28:59 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

// gcc ft_strlcpy.c -l bsd && ./a.out
int	test_ft_strlcpy(void)
{
	char			source[] = "moulinette";
	char			destination[] = "phraseasupprimer";
	unsigned int	size;
	unsigned int	size_destination;
	unsigned int	i;

	size = 5;
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
