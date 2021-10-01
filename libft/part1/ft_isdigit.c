/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:19:02 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 12:28:54 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char t1[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2[] = "!@#$^&*()_1234567890";
	char t3[] = "1234567890";
	char t4[] = "	1234567890";
	char t5[] = " ";
	char t6[] = "";
	int res;
	int res2;
	int i;

	// T1
	i = 0;
	res = 1;
	while (t1[i] != '\0' && res)
	{
		res = ft_isdigit(t1[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t1[i] != '\0' && res2)
	{
		res2 = isdigit(t1[i]);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// T2
	i = 0;
	res = 1;
	while (t2[i] != '\0' && res)
	{
		res = ft_isdigit(t2[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t2[i] != '\0' && res2)
	{
		res2 = isdigit(t2[i]);
		i++;
	}
	printf("T2: %d (%d)\n", res, res2);

	// T3
	i = 0;
	res = 1;
	while (t3[i] != '\0' && res)
	{
		res = ft_isdigit(t3[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t3[i] != '\0' && res2)
	{
		res2 = isdigit(t3[i]);
		i++;
	}
	printf("T3: %d (%d)\n", res, res2);

	// T4
	i = 0;
	res = 1;
	while (t4[i] != '\0' && res)
	{
		res = ft_isdigit(t4[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t4[i] != '\0' && res2)
	{
		res2 = isdigit(t4[i]);
		i++;
	}
	printf("T4: %d (%d)\n", res, res2);

	// T5
	i = 0;
	res = 1;
	while (t5[i] != '\0' && res)
	{
		res = ft_isdigit(t5[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t5[i] != '\0' && res2)
	{
		res2 = isdigit(t5[i]);
		i++;
	}
	printf("T5: %d (%d)\n", res, res2);

	// T6
	i = 0;
	res = 1;
	while (t6[i] != '\0' && res)
	{
		res = ft_isdigit(t6[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t6[i] != '\0' && res2)
	{
		res2 = isdigit(t6[i]);
		i++;
	}
	printf("T6: %d (%d)\n", res, res2);
}
