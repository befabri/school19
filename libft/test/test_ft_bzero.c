/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:49:33 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:05:36 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int		test_ft_bzero(void)
{
	char	t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "1234567890";
	char	t3[] = "test de fonction";
	char	t4[] = " ";
	char	t5[] = "";
	char	t1bis[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2bis[] = "1234567890";
	char	t3bis[] = "test de fonction";
	char	t4bis[] = " ";
	char	t5bis[] = "";
	int		i;
	int		size;

	ft_bzero(t1, 10);
	ft_bzero(t2, 5);
	ft_bzero(t3, 7);
	ft_bzero(t4, 1);
	ft_bzero(t5, 0);
	bzero(t1bis, 10);
	bzero(t2bis, 5);
	bzero(t3bis, 7);
	bzero(t4bis, 1);
	bzero(t5bis, 0);

	printf("t1: %s \n -> %s \n", t1, t1bis);
	i = 0;
	size = 50;
	while (i < size)
	{
		if (t1bis[i] == '\0')
			t1bis[i] = '|';
		if (t1[i] == '\0')
			t1[i] = '|';
		i++;
	}
	printf("t1: %s \n -> %s \n", t1, t1bis);
}
