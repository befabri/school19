/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:49:33 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 14:28:04 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	int c;
	(char *) s;
	if (n < 1 )
		return ;
	c = 0;
	while (s[c] != '\0' && c < n)
	{
		s[c] = '\0';
		c++;
	}
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2[] = "1234567890";
	char t3[] = "test de fonction";
	char t4[] = " ";
	char t5[] = "";

	char t1bis[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2bis[] = "1234567890";
	char t3bis[] = "test de fonction";
	char t4bis[] = " ";
	char t5bis[] = "";

	// ft_bzero(t1, 10);
	// ft_bzero(t2, 5);
	// ft_bzero(t3, 7);
	// ft_bzero(t4, 1);
	// ft_bzero(t5, 0);
	
	bzero(t1bis, 10);
	bzero(t2bis, 5);
	bzero(t3bis, 7);
	bzero(t4bis, 1);
	bzero(t5bis, 0);

	printf("t1: %s \nAttendu: %s \n", t1, t1bis);

	int i;

	i = 0;
	
	int size = 50;
	while (i < size)
	{
		if (t1bis[i] == '\0')
			t1bis[i] = '|';
		i++;
	}
	printf("t1: %s \nAttendu: %s \n", t1, t1bis);
}
