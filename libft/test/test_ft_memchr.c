/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:44:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/07 21:10:20 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_memchr(void)
{
	char	t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "1234567890";
	char	t3[] = "Ceci est UNE PhRase de test";
	char	t4[] = "Test yeah";
	char	t5[] = "";
	char	t6[] = "Test du backslash zero\0";
	char	t7[] = "\0Test du backslash zero";

	printf("T1: %p (%p)\n", ft_memchr(t1, 'z', 50), memchr(t1, 'z', 50));
	printf("T2: %p (%p)\n", ft_memchr(t2, '1', 4), memchr(t2, '1', 4));
	printf("T3: %p (%p)\n", ft_memchr(t3, 'P', 4), memchr(t3, 'P', 4));
	printf("T4: %p (%p)\n", ft_memchr(t4, ' ', 20), memchr(t4, ' ', 20));
	printf("T5: %p (%p)\n", ft_memchr(t5, 'z', 10), memchr(t5, 'z', 10));
	printf("T6: %p (%p)\n", ft_memchr(t6, '\0', 5), memchr(t6, '\0', 5));
	printf("T7: %p (%p)\n", ft_memchr(t7, '\0', 3), memchr(t7, '\0', 3));
	return (0);
}