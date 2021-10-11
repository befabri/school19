/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:37:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:22 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	test_ft_tolower(void)
{
	printf("A -> %c (%c)\n", ft_tolower('A'), tolower('A'));
	printf("Z -> %c (%c)\n", ft_tolower('Z'), tolower('Z'));
	printf("a -> %c (%c)\n", ft_tolower('a'), tolower('a'));
	printf("z -> %c (%c)\n", ft_tolower('z'), tolower('z'));
	printf("- -> %c (%c)\n", ft_tolower('-'), tolower('-'));
	printf("P -> %c (%c)\n", ft_tolower('P'), tolower('P'));
}
