/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:02:04 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/09 11:02:04 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

int	main(void)
{
	int	test_a;
	int	test_b;

	test_a = 60;
	test_b = 7;
	printf("test_a->  %d %p\n", test_a, &test_a);
	printf("test_b->  %d %p\n", test_b, &test_b);
	ft_ultimate_div_mod(&test_a, &test_b);
	printf("------ SWAP ------\n");
	printf("test_a->  %d %p\n", test_a, &test_a);
	printf("test_b->  %d %p\n", test_b, &test_b);
}
