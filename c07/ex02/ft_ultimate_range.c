/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:24:42 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/23 12:07:49 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*copy;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	copy = (int *) malloc(sizeof(int) * (max - min));
	if (copy == NULL)
		return (0);
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
