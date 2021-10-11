/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:28:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:05:54 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_memcpy(void)
{
	const char	src_1[50] = "phrase de test a afficher";
	char		dst_1[] = "a remplacer";
	const char	src_2[50] = "phrase de test a afficher";
	char		dst_2[] = "a remplacer";

	printf("TEST 1\n");
	printf("Src: %s\n", src_1);
	printf("Dst: %s\n", dst_1);

	//ft_memcpy(0, 0, strlen(src_1) + 1);
	//ft_memcpy(dst_1, 0, strlen(src_1) + 1); // Segfault
	ft_memcpy(dst_1, src_1, strlen(src_1) + 1);
	printf("ft_memcpy Src: %s\n", src_1);
	printf("ft_memcpy Dst: %s\n", dst_1);

	//memcpy(0, 0, strlen(src_2) + 1);
	//memcpy(dst_2, 0, strlen(src_2) + 1); // Segfault
	memcpy(dst_2, src_2, strlen(src_2) + 1);
	printf("memcpy Src: %s\n", src_2);
	printf("memcpy Dst: %s\n", dst_2);

	return(0);
}