/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:20:55 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 10:51:59 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	unsigned int	c;

	s1_tmp = (unsigned char *) s1;
	s2_tmp = (unsigned char *) s2;

	if (n == 0)
		return (0);
	c = 0;
	while (s1_tmp[c] != '\0' && s2_tmp[c] != '\0' && s1_tmp[c] == s2_tmp[c] && c < n - 1)
	{
		 c++;
	}
	if (s1_tmp[c] == '\0' && s2_tmp[c] == '\0')
		return (0);
	return (s1_tmp[c] - s2_tmp[c]);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("test1: %s VS %s = %d (%s) (n=%d)\n", "ABDQRTS", "ABC", ft_memcmp("ABDQRTS", "ABC", 0), "21", 3);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ClAvieR", "ClAv	iER", ft_memcmp("ClAvieR", "ClAviER", 6), "32", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ABA", "ABZ", ft_memcmp("ABA", "ABZ", 1), "0", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "AbCdE", "AbCdEFG", ft_memcmp("AbCdE", "AbCdEFG", 5), "0", 5);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "\120", "QB", ft_memcmp("\120", "QB", 1), "-1", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "zapolo", "zapoln", ft_memcmp("zapolo", "zapoln", 6), "1", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "B", "\102", ft_memcmp("B", "\102", 10), "0", 10);
	printf("\n");
	return (0);
}