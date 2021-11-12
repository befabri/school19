/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:36:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 12:56:06 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

static int check(char *str, char sep)
{
	char	**test;
	unsigned int	i;

	i = 0;
	test = ft_split(str, sep);
	printf("-> ");
	while (test[i] != 0)
	{
		printf("%s", test[i]);
		free(test[i]);
		i++;
	}
	printf("\n");
	free(test);
	return (1);
}

int	test_ft_split(void)
{
	char *str1 = "--1-2-3-4-5-6-7-8--8-8--8-4------4--4";
	char sep1 = '-';

	char *str2 = "---||---";
	char sep2 = '-';

	char *str3 = "xd;okay or not okay xDDD ;  mais bon; ca ne marche pas;ohm";
	char sep3 = ';';

	char *str4 = "";
	char sep4 = ',';
	
	char *str5 = "LOL - TEST - ()";
	char sep5 = 0;

	check(str1, sep1);
	check(str2, sep2);
	check(str3, sep3);
	check(str4, sep4);
	check(str5, sep5);
	return (0);
}

