/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:38:58 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/22 16:04:14 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	i;
	
	if (min >= max)
		return (0);
	copy = malloc(sizeof(int) * (max - min));
	if (copy == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		copy[i] = min;
		min++;
		i++;
	}
	return (copy);
}
