/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:35:50 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:35:47 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strlcat(void)
{
	char	test_dst[30] = "hello you";
	char	test_dst_bis[30] = "hello you";
	char	test_src[] = " everyone is cool";

	unsigned int size_ft_strlcat = ft_strlcat(test_dst, test_src, 25);
	printf("Size -> %d \n", size_ft_strlcat);
	printf("ft_strlcat-> %s \n", test_dst);
	printf("\n");
	size_ft_strlcat = strlcat(test_dst_bis, test_src, 25);
	printf("Size -> %d \n", size_ft_strlcat);
	printf("strlcat-> %s \n", test_dst_bis);
	printf("\n");
	return (0);
}
