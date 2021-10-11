/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:06:39 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:01 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strchr(void)
{
	char	t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "1234567890";
	char	t3[] = "Ceci est UNE PhRase de test";
	char	t4[] = "Test yeah";
	char	t5[] = "";
	char	t6[] = "Test du backslash zero\0";
	char	t7[] = "\0Test du backslash zero";

	printf("T1: %s (%s)\n", ft_strchr(t1, 'z'), strchr(t1, 'z'));
	printf("T2: %s (%s)\n", ft_strchr(t2, '1'), strchr(t2, '1'));
	printf("T3: %s (%s)\n", ft_strchr(t3, 'P'), strchr(t3, 'P'));
	printf("T4: %s (%s)\n", ft_strchr(t4, ' '), strchr(t4, ' '));
	printf("T5: %s (%s)\n", ft_strchr(t5, 'z'), strchr(t5, 'z'));
	printf("T6: %s (%s)\n", ft_strchr(t6, '\0'), strchr(t6, '\0'));
	printf("T7: %s (%s)\n", ft_strchr(t7, '\0'), strchr(t7, '\0'));
}