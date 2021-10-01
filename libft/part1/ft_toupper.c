/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:36:45 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 14:55:03 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("A -> %c (%c)\n", ft_toupper('A'), toupper('A'));
	printf("Z -> %c (%c)\n", ft_toupper('Z'), toupper('Z'));
	printf("a -> %c (%c)\n", ft_toupper('a'), toupper('a'));
	printf("z -> %c (%c)\n", ft_toupper('z'), toupper('z'));
	printf("- -> %c (%c)\n", ft_toupper('-'), toupper('-'));
	printf("P -> %c (%c)\n", ft_toupper('P'), toupper('P'));
}