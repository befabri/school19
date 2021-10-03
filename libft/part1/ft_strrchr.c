/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:31:17 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:26:52 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	int size;

	size = ft_strlen(s);
	while (size > 0)
	{
		if (s[size] == c)
			return ((char *) s + size);
		size--;
	}
	if (s[size] == '\0' && c == '\0') // TODO A verifier
		return ((char *) s + size);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTZUVWXYZ";
	char t2[] = "123456789080";
	char t3[] = "Ceci est UNE PhRase de test :D";
	char t4[] = "Test yeah oh";
	char t5[] = "";
	char t6[] = "Test du backslash zero\0";
	char t7[] = "\0Test du backslash zero";

	printf("T1: %s (%s)\n", ft_strrchr(t1, 'Z'), strrchr(t1, 'Z'));
	printf("T2: %s (%s)\n", ft_strrchr(t2, '8'), strrchr(t2, '8'));
	printf("T3: %s (%s)\n", ft_strrchr(t3, 't'), strrchr(t3, 't'));
	printf("T4: %s (%s)\n", ft_strrchr(t4, ' '), strrchr(t4, ' '));
	printf("T5: %s (%s)\n", ft_strrchr(t5, 'z'), strrchr(t5, 'z'));
	printf("T6: %s (%s)\n", ft_strrchr(t6, '\0'), strrchr(t6, '\0'));
	printf("T7: %s (%s)\n", ft_strrchr(t7, '\0'), strrchr(t7, '\0'));
}
