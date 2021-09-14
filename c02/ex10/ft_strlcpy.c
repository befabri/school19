/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:43:33 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/14 17:55:02 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (size > 0)
	{
		while (src[c] != '\0' && c < size - 1)
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}
