/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:19:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/17 10:46:52 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	if (to_find[0] == '\0')
		return (str);
	c = 0;
	while (str[c] != '\0')
	{
		d = 0;
		if (str[c] == to_find[0])
		{
			while (str[c + d] == to_find[d])
			{
				d++;
				if (to_find[d] == '\0')
					return (str + c);
			}
		}
		 c++;
	}
	return (0);
}
