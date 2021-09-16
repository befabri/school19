/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moi <moi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:19:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/17 00:49:26 by moi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;

	c = 0;
	if (to_find == '\0')
		return (str);
	while (str[c] != '\0')
	{
		i = 0;
		if (str[c] == to_find[0])
		{
			while (str[c] == to_find[i])
			{
				c++;
				i++;
				if (to_find[i] == '\0')
					return (&str[c - i]);
			}
		}
		 c = c - i + 1;
	}
	return (0);
}
