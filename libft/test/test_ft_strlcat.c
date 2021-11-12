/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:35:50 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 13:02:00 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strlcat(void)
{
	char	test_src[] = " everyone is cool";
	unsigned int size;

	char	test_dst1[30] = "hello you";
	char	test_dst2[30] = "hello you";
	char	test_dst3[30] = "hello you";
	char	test_dst4[30] = "hello you";
	char	test_dst5[30] = "hello you";
	char	test_dst6[30] = "hello you";

	size = ft_strlcat(test_dst1, test_src, 25);
	printf("Size -> %d \n", size);
	printf("ft_strlcat-> %s \n", test_dst1);
	printf("\n");
	
	size = strlcat(test_dst2, test_src, 25);
	printf("Size -> %d \n", size);
	printf("strlcat-> %s \n", test_dst2);
	printf("\n");

	size = ft_strlcat(test_dst3, test_src, 0);
	printf("Size -> %d \n", size);
	printf("ft_strlcat-> %s \n", test_dst3);
	printf("\n");

	size = strlcat(test_dst4, test_src, 0);
	printf("Size -> %d \n", size);
	printf("strlcat-> %s \n", test_dst4);
	printf("\n");

	size = ft_strlcat(test_dst5, test_src, 200);
	printf("Size -> %d \n", size);
	printf("ft_strlcat-> %s \n", test_dst5);
	printf("\n");

	size = strlcat(test_dst6, test_src, 200);
	printf("Size -> %d \n", size);
	printf("strlcat-> %s \n", test_dst6);
	printf("\n");
	return (0);
}
