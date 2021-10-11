/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:36:49 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/23 13:46:34 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	int a = 20;
	int b = 1;

	ft_putchar('a');
	printf("\n");
	ft_putstr("Salut");
	printf("\n");
	printf("ft_strcmp -> %d\n", ft_strcmp("Test", "Tesa"));
	ft_swap(&a, &b);
	printf("ft_swap -> %d <--> %d\n", a, b);
	printf("ft_strlen -> %d\n", ft_strlen("ABC"));
	return (0);
}