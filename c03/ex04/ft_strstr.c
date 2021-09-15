/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:19:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/15 17:45:11 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	if (to_find == '\0')
		return (str);
	while (str[c] != '\0')
	{
		i = 0;
		if (str[c] == to_find[i])
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
