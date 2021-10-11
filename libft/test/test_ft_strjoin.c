/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:19:48 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 22:21:54 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strjoin(void)
{
	char	*retour;
	char const	str_1[] = "Testons le join hum-ca-marchepo-";
	char const	str_2[] = "Ralallala";
	
	retour = ft_strjoin(str_1, str_2);
	printf("strjoin = %s\n", retour);
	free(retour);
	return (0);
}
