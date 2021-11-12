/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:34:40 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 03:11:36 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strtrim(void)
{
	const char	*src = "- -Melange-le - son- doucement- -";
	const char	*to_find = "--";
	char *test;

	printf(" %s \n to_find: %s\n", src, to_find);
	test = ft_strtrim(src, to_find);
	printf("-> %s \n", test);
	free(test);
	return (0);
}
