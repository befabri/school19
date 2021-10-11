/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:31:17 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:15 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strrchr(void)
{
	char	t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTZUVWXYZ";
	char	t2[] = "123456789080";
	char	t3[] = "Ceci est UNE PhRase de test :D";
	char	t4[] = "Test yeah oh";
	char	t5[] = "";
	char	t6[] = "Test du backslash zero\0";
	char	t7[] = "\0Test du backslash zero";

	printf("T1: %s (%s)\n", ft_strrchr(t1, 'Z'), strrchr(t1, 'Z'));
	printf("T2: %s (%s)\n", ft_strrchr(t2, '8'), strrchr(t2, '8'));
	printf("T3: %s (%s)\n", ft_strrchr(t3, 't'), strrchr(t3, 't'));
	printf("T4: %s (%s)\n", ft_strrchr(t4, ' '), strrchr(t4, ' '));
	printf("T5: %s (%s)\n", ft_strrchr(t5, 'z'), strrchr(t5, 'z'));
	printf("T6: %s (%s)\n", ft_strrchr(t6, '\0'), strrchr(t6, '\0'));
	printf("T7: %s (%s)\n", ft_strrchr(t7, '\0'), strrchr(t7, '\0'));
}
