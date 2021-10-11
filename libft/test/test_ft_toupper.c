/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:36:45 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 21:40:44 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_toupper(void)
{
	printf("A -> %c (%c)\n", ft_toupper('A'), toupper('A'));
	printf("Z -> %c (%c)\n", ft_toupper('Z'), toupper('Z'));
	printf("a -> %c (%c)\n", ft_toupper('a'), toupper('a'));
	printf("z -> %c (%c)\n", ft_toupper('z'), toupper('z'));
	printf("- -> %c (%c)\n", ft_toupper('-'), toupper('-'));
	printf("P -> %c (%c)\n", ft_toupper('P'), toupper('P'));
}
