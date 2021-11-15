/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 13:49:05 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_atoi(void)
{
	char	test[] = "   +-----++++++++++++++++++++++1234ab567";
	char	test2[] = " -1234ab567";
	char	test3[] = " - 1234ab567";
	char	test4[] = " +-1234ab567";
	char	test5[] = "----+1234ab567";
	char	test6[] = "3-1234ab567";
	char	test7[] = "+9@-1234ab567";
	char	test8[] = "\t\n\r\v\f  469 \n";
	char	test9[] = "2247483647";
	char	test10[] = "2247483648";
	char	test11[] = "2247483649";
	char	test12[] = "-0";
	char	test13[] = "0";

	printf("============= FT_ATOI =============\n");
	printf("%d (%d) : %s\n", ft_atoi(test), atoi(test), test);
	printf("%d (%d) : %s\n", ft_atoi(test2), atoi(test2), test2);
	printf("%d (%d) : %s\n", ft_atoi(test3), atoi(test3), test3);
	printf("%d (%d) : %s\n", ft_atoi(test4), atoi(test4), test4);
	printf("%d (%d) : %s\n", ft_atoi(test5), atoi(test5), test5);
	printf("%d (%d) : %s\n", ft_atoi(test6), atoi(test6), test6);
	printf("%d (%d) : %s\n", ft_atoi(test7), atoi(test7), test7);
	printf("%d (%d) : %s\n", ft_atoi(test8), atoi(test8), test8);
	printf("%d (%d) : %s\n", ft_atoi(test9), atoi(test9), test9);
	printf("%d (%d) : %s\n", ft_atoi(test10), atoi(test10), test10);
	printf("%d (%d) : %s\n", ft_atoi(test11), atoi(test11), test11);
	printf("%d (%d) : %s\n", ft_atoi(test12), atoi(test12), test12);
	printf("%d (%d) : %s\n", ft_atoi(test12), atoi(test13), test13);
	printf("\n");
	return (0);
}
