/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:20:55 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:05:53 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_memcmp(void)
{
	printf("test1: %s VS %s = %d (%s) (n=%d)\n", "ABDQRTS", "ABC", ft_memcmp("ABDQRTS", "ABC", 0), "21", 3);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ClAvieR", "ClAv	iER", ft_memcmp("ClAvieR", "ClAviER", 6), "32", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ABA", "ABZ", ft_memcmp("ABA", "ABZ", 1), "0", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "AbCdE", "AbCdEFG", ft_memcmp("AbCdE", "AbCdEFG", 5), "0", 5);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "\120", "QB", ft_memcmp("\120", "QB", 1), "-1", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "zapolo", "zapoln", ft_memcmp("zapolo", "zapoln", 6), "1", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "B", "\102", ft_memcmp("B", "\102", 10), "0", 10);
	printf("\n");
	return (0);
}