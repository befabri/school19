/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:49:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 15:52:14 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *	strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int	c;
	int	d;

	if (needle[0] == '\0')
		return (needle);
	c = 0;
	while (haystack[c] != '\0')
	{
		d = 0;
		if (haystack[c] == needle[0])
		{
			while (haystack[c + d] == needle[d])
			{
				d++;
				if (needle[d] == '\0')
					return (needle + c);
			}
		}
		 c++;
	}
	return (0);
}