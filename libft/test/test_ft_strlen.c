/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:33:49 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:11 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strlen(void)
{
	char t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2[] = "1234567890";
	char t3[] = ".";
	char t4[] = " ";
	char t5[] = "";

	printf("T1: %d (%lu)\n", ft_strlen(t1), strlen(t1));
	printf("T2: %d (%lu)\n", ft_strlen(t2), strlen(t2));
	printf("T3: %d (%lu)\n", ft_strlen(t3), strlen(t3));
	printf("T4: %d (%lu)\n", ft_strlen(t4), strlen(t4));
	printf("T5: %d (%lu)\n", ft_strlen(t5), strlen(t5));
}
