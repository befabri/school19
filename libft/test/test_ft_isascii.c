/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:58:49 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:05:45 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_isascii(void)
{
	char t1[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2[] = "!@#$^&*()_1234567890";
	char t3[] = "1234567890";
	char t4[] = "	1234567890";
	char t5[] = " ";
	char t6[] = "";
	int res;
	int res2;
	int i;

	// T1
	i = -20;
	res = 1;
	while (i < 130 && res)
	{
		res = ft_isascii(i);
		i++;
	}
	printf("T1: %d ()\n", i);
	i = -20;
	res2 = 1;
	while (i < 130 && res)
	{
		res2 = isascii(180);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);
}
