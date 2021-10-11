/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:36:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 22:13:33 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_split(void)
{
	char	**test;
	unsigned int	i;

	i = 0;
	test = ft_split("Splitons, tout, ca-marche -ou-pas?;-hmumm", ", ");
	while (test[i] != 0)
	{
		printf("%s \n", test[i]);
		i++;
	}
	return (0);
}

