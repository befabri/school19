/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:56:15 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/29 17:27:01 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*copy;

	if (count == 0 || size == 0)
		return (0);
	copy = malloc(count * size);
	if (copy == NULL)
		return (0);
	ft_memset(copy, 0, count * size);
	return (copy);
}
