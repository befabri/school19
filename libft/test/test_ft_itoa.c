/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/08 01:55:35 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_itoa(void)
{
	int	test = 12345;
	int	test2 = -12345;
	int	test3 = 49;
	int	test4 = 0;
	int	test5 = -2147483648;
	
	printf("============= FT_ITOA =============\n");
	printf("%s () : %d\n", ft_itoa(test), test);
	printf("%s () : %d\n", ft_itoa(test2), test2);
	printf("%s () : %d\n", ft_itoa(test3), test3);
	printf("%s () : %d\n", ft_itoa(test4), test4);
	printf("%s () : %d\n", ft_itoa(test5), test5);
	printf("\n");
	return (0);
}
