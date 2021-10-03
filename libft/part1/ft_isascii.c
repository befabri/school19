/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:58:49 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:50:15 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char t1[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char t2[] = "!@#$^&*()_1234567890";
// 	char t3[] = "1234567890";
// 	char t4[] = "	1234567890";
// 	char t5[] = " ";
// 	char t6[] = "";
// 	int res;
// 	int res2;
// 	int i;

// 	// T1
// 	i = -20;
// 	res = 1;
// 	while (i < 130 && res)
// 	{
// 		res = ft_isascii(i);
// 		i++;
// 	}
// 	printf("T1: %d ()\n", i);
// 	i = -20;
// 	res2 = 1;
// 	while (i < 130 && res)
// 	{
// 		res2 = isascii(180);
// 		i++;
// 	}
// 	printf("T1: %d (%d)\n", res, res2);
// }
