/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:41:35 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:05:56 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_memmove (void)
{
	const char	src_1[50] = "phrase de test a afficher";
	char		dst_1[] = "a remplacer";
	const char	src_2[50] = "phrase de test a afficher";
	char		dst_2[] = "a remplacer";

	printf("TEST 1\n");
	printf("Src: %s\n", src_1);
	printf("Dst: %s\n", dst_1);

	//ft_memmove(0, 0, strlen(src_1) + 1);
	//ft_memmove(dst_1, 0, strlen(src_1) + 1); // Segfault
	ft_memmove(dst_1, src_1, strlen(src_1) + 1);
	printf("ft_memmove Src: %s\n", src_1);
	printf("ft_memmove Dst: %s\n", dst_1);

	//memmove(0, 0, strlen(src_2) + 1);
	//memmove(dst_2, 0, strlen(src_2) + 1); // Segfault
	memmove(dst_2, src_2, strlen(src_2) + 1);
	printf("memmove Src: %s\n", src_2);
	printf("memmove Dst: %s\n", dst_2);

	return(0);
}