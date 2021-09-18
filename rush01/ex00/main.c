/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:54:06 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 00:58:41 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(char *str, int row, int column);

int		main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
		return (0);
	i = 1;
	rush(argv[i], 6, 6);
	return (0);
}
