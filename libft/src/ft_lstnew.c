/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:45:48 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/09 18:38:46 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*copy;

	copy = (t_list *) malloc(sizeof(t_list));
	if (copy == NULL)
		return (0);
	copy->content = content;
	copy->next = NULL;
	return (copy);
}
