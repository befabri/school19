/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:36:54 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/12 03:15:33 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_split(void)
{
	char	**test;
	unsigned int	i;

	i = 0;
	test = ft_split("xd;okay or not okay xDDD ;  mais bon; ca ne marche pas;ohm", ';');
	while (test[i] != '\0')
	{
		printf("->%s \n", test[i]);
		free(test[i]);
		i++;
	}
	free(test);
	return (0);
}

