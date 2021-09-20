/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:12:44 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/20 11:05:13 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	dest_size;

	c = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
	dest[dest_size + c] = '\0';
	return (dest);
}
