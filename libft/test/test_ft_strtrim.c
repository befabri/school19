/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:34:40 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/12 11:40:04 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strtrim(void)
{
	const char	*src = "bonjour our si lourd voiloura";
	const char	*to_find = "our";

	printf(" %s \n to_find: %s\n", src, to_find);
	printf("-> %s \n", ft_strtrim(src, to_find));
	return (0);
}
