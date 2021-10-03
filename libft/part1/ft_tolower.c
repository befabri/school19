/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:37:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:26:49 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("A -> %c (%c)\n", ft_tolower('A'), tolower('A'));
	printf("Z -> %c (%c)\n", ft_tolower('Z'), tolower('Z'));
	printf("a -> %c (%c)\n", ft_tolower('a'), tolower('a'));
	printf("z -> %c (%c)\n", ft_tolower('z'), tolower('z'));
	printf("- -> %c (%c)\n", ft_tolower('-'), tolower('-'));
	printf("P -> %c (%c)\n", ft_tolower('P'), tolower('P'));
}
