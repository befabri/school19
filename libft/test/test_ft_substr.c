/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:11:56 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:19 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_substr(void)
{
	const char	*test = "Phrase de test aled";

	printf("-> %s \n", ft_substr(test, 15, 4));
	return (0);
}
