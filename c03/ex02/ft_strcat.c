/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:35:11 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/15 16:12:41 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int	c;
	int	dest_size;

	c = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[c] != '\0')
	{
		dest[dest_size + c] = src[c];
		c++;
	}
    dest[dest_size + c] = '\0';

    return dest;
}
