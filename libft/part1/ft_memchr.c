/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:44:43 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/08 15:50:56 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char			*s_tmp;
	unsigned int	i;

	s_tmp = (char *) s;

	i = 0;
	while (s_tmp[i] != '\0' && i < n)
	{
		if (s_tmp[i] == c)
			return ((char *) s_tmp + i);
		i++;
	}
	if (s_tmp[i] == '\0' && c == '\0') // TODO A verifier
		return ((char *) s_tmp + i);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "1234567890";
	char	t3[] = "Ceci est UNE PhRase de test";
	char	t4[] = "Test yeah";
	char	t5[] = "";
	char	t6[] = "Test du backslash zero\0";
	char	t7[] = "\0Test du backslash zero";

	printf("T1: %s (%s)\n", ft_memchr(t1, 'z', 50), memchr(t1, 'z'));
	printf("T2: %s (%s)\n", ft_memchr(t2, '1', 4), memchr(t2, '1'));
	printf("T3: %s (%s)\n", ft_memchr(t3, 'P', 4) 4, memchr(t3, 'P'));
	printf("T4: %s (%s)\n", ft_memchr(t4, ' '), memchr(t4, ' '));
	printf("T5: %s (%s)\n", ft_memchr(t5, 'z'), memchr(t5, 'z'));
	printf("T6: %s (%s)\n", ft_memchr(t6, '\0'), memchr(t6, '\0'));
	printf("T7: %s (%s)\n", ft_memchr(t7, '\0'), memchr(t7, '\0'));
}