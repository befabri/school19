/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:24:42 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/22 16:10:08 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*copy;
	int	i;
	
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	copy = malloc(sizeof(int) * (max - min));
	if (copy == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		copy[i] = min;
		min++;
		i++;
	}
	*range = copy;
	return (i);
}
