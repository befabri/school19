/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:57:22 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/12 12:11:22 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_memset (void)
{
	char	src_1[50] = "phrase de test a afficher";
	char	src_2[50] = "phrase de test a afficher";

	char	src_3[50] = "phrase de test a afficher";
	char	src_4[50] = "phrase de test a afficher";

	printf("FT_MEMSET\n");
	printf("ft_memset Dst: %s\n", ft_memset(src_1, 'a', 5));
	printf("ft_memset Dst: %s\n", ft_memset(src_2, 'a', 0));
	
	printf("memset Dst: %s\n", memset(src_3, 'a', 5));
	printf("memset Dst: %s\n", memset(src_4, 'a', 0));
	return(0);
}