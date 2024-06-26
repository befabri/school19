/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:46:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/23 18:25:41 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlen_array(char **str, int size_str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (i < size_str)
	{
		size += ft_strlen(str[i]);
		i++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
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
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*copy;
	int		i;
	int		size_str;

	if (size == 0)
	{
		copy = malloc(sizeof(char));
		*copy = 0;
		return (copy);
	}
	size_str = ft_strlen(sep) * (size - 1);
	size_str += ft_strlen_array(strs, size);
	copy = (char *) malloc(sizeof(char) * (size_str + 1));
	if (copy == NULL)
		return (0);
	i = 0;
	*copy = 0;
	while (i < size)
	{
		ft_strcat(copy, strs[i]);
		if (i + 1 != size)
			ft_strcat(copy, sep);
		i++;
	}
	copy[size_str] = '\0';
	return (copy);
}
