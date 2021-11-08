/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:49:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/07 21:09:09 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_strnstr(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("-> %s \n", ptr);

	//ptr = strnstr(largestring, smallstring, 4);
	//printf("-> %s \n", ptr);
	return (0);
}
