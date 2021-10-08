/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:20:55 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/08 15:40:37 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	char			*s1_tmp;
	char			*s2_tmp;
	unsigned int	c;

	s1_tmp = (char *) s1;
	s2_tmp = (char *) s2;

	if (n == 0)
		return (0);
	c = 0;
	while (s1_tmp[c] != '\0' && s2_tmp[c] != '\0' && s1_tmp[c] == s2_tmp[c] && c < n - 1)
	{
		 c++;
	}
	if (s1_tmp[c] == '\0' && s2_tmp[c] == '\0')
	{
		return (0);
	}
	return (s1_tmp[c] - s2_tmp[c]);
}


#include <stdio.h>
#include <string.h>

int	main (void)
{
	const char	s1[] = "aC";
	const char	d1[] = "ac";

	printf("TEST 1\n");
	printf("%s vs %s -> %d\n", s1, d1, ft_memcmp(s1, d1, 2));
	printf("%s vs %s -> %d\n", s1, d1, memcmp(s1, d1, 2));
	return(0);
}