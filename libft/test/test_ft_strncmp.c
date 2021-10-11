/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:57:00 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:12 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strncmp(void)
{
	printf("test1: %s VS %s = %d (%s) (n=%d)\n", "AB A", "AB B", ft_strncmp("ABXQRTS", "ABC", 0), "21", 3);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ClAvieR", "ClAv	iER", ft_strncmp("ClAvieR", "ClAviER", 6), "32", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ABA", "ABZ", ft_strncmp("ABA", "ABZ", 1), "0", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "AbCdE", "AbCdEFG", ft_strncmp("AbCdE", "AbCdEFG", 5), "0", 5);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "\120", "QB", ft_strncmp("\120", "QB", 1), "-1", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "zapolo", "zapoln", ft_strncmp("zapolo", "zapoln", 6), "1", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "B", "\102", ft_strncmp("B", "\102", 10), "0", 10);
	printf("\n");
	return (0);
}
