/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:49:46 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:26:54 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *	ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int	c;
	int	d;

	if (needle[0] == '\0')
		return ((char *) haystack);
	c = 0;
	while (haystack[c] != '\0' && c < len)
	{
		d = 0;
		if (haystack[c] == needle[0])
		{
			while (haystack[c + d] == needle[d])
			{
				d++;
				if (needle[d] == '\0')
					return ((char *) haystack + c);
			}
		}
		 c++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	
	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("-> %s \n", ptr);

	ptr = strnstr(largestring, smallstring, 4);
	printf("-> %s \n", ptr);
}
