/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:57:00 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 19:51:55 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	c;

	if (n == 0)
		return (0);
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c] && c < n - 1)
	{
		 c++;
	}
	if (s1[c] == '\0' && s2[c] == '\0')
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("test1: %s VS %s = %d (%s) (n=%d)\n", "AB A", "AB B", ft_strncmp("ABXQRTS", "ABC", 0), "21", 3);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ClAvieR", "ClAv	iER", ft_strncmp("ClAvieR", "ClAviER", 6), "32", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "ABA", "ABZ", ft_strncmp("ABA", "ABZ", 1), "0", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "AbCdE", "AbCdEFG", ft_strncmp("AbCdE", "AbCdEFG", 5), "0", 5);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "\120", "QB", ft_strncmp("\120", "QB", 1), "-1", 1);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "zapolo", "zapoln", ft_strncmp("zapolo", "zapoln", 6), "1", 6);
	printf("test2: %s VS %s = %d (%s) (n=%d)\n", "B", "\102", ft_strncmp("B", "\102", 10), "0", 10);
	printf("\n");
	return (0);
}
