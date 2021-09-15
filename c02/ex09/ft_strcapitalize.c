/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:05:13 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/15 11:23:16 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_strlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_str_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 1;
	str[0] = ft_strupcase(str[0]);
	while (str[c] != '\0')
	{
		if (!ft_str_is_alpha(str[c - 1]) && !ft_str_is_numeric(str[c - 1]))
		{
			str[c] = ft_strupcase(str[c]);
		}
		else
		{
			str[c] = ft_strlowcase(str[c]);
		}
		c++;
	}
	return (str);
}
