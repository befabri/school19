/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/11 16:38:15 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	test_ft_atoi(void)
{
	char	test[] = "   +-----++++++++++++++++++++++1234ab567";
	char	test2[] = " -1234ab567";
	char	test3[] = " - 1234ab567";
	char	test4[] = " +-1234ab567";
	char	test5[] = "----+1234ab567";
	char	test6[] = "3-1234ab567";
	char	test7[] = "+9@-1234ab567";
	
	printf("============= FT_ATOI =============\n");
	printf("%d (%d) : %s\n", ft_atoi(test), atoi(test), test);
	printf("%d (%d) : %s\n", ft_atoi(test2), atoi(test2), test2);
	printf("%d (%d) : %s\n", ft_atoi(test3), atoi(test3), test3);
	printf("%d (%d) : %s\n", ft_atoi(test4), atoi(test4), test4);
	printf("%d (%d) : %s\n", ft_atoi(test5), atoi(test5), test5);
	printf("%d (%d) : %s\n", ft_atoi(test6), atoi(test6), test6);
	printf("%d (%d) : %s\n", ft_atoi(test7), atoi(test7), test7);
	printf("\n");
	return (0);
}

int	test_ft_bzero(void)
{
	char	t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "1234567890";
	char	t3[] = "test de fonction";
	char	t4[] = " ";
	char	t5[] = "";
	char	t1bis[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2bis[] = "1234567890";
	char	t3bis[] = "test de fonction";
	char	t4bis[] = " ";
	char	t5bis[] = "";
	int		i;
	int		size;

	ft_bzero(t1, 10);
	ft_bzero(t2, 5);
	ft_bzero(t3, 7);
	ft_bzero(t4, 1);
	ft_bzero(t5, 0);
	bzero(t1bis, 10);
	bzero(t2bis, 5);
	bzero(t3bis, 7);
	bzero(t4bis, 1);
	bzero(t5bis, 0);

	printf("t1: %s \n -> %s \n", t1, t1bis);
	i = 0;
	size = 50;
	while (i < size)
	{
		if (t1bis[i] == '\0')
			t1bis[i] = '|';
		if (t1[i] == '\0')
			t1[i] = '|';
		i++;
	}
	printf("t1: %s \n -> %s \n", t1, t1bis);
}

int	test_ft_isalnum(void)
{
	char	t1[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "!@#$^&*()_1234567890";
	char	t3[] = "1234567890";
	char	t4[] = "	1234567890";
	char	t5[] = " ";
	char	t6[] = "";
	int		res;
	int		res2;
	int		i;

	// T1
	i = 0;
	res = 1;
	while (t1[i] != '\0' && res)
	{
		res = ft_isalnum(t1[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t1[i] != '\0' && res2)
	{
		res2 = isalnum(t1[i]);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// T2
	i = 0;
	res = 1;
	while (t2[i] != '\0' && res)
	{
		res = ft_isalnum(t2[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t2[i] != '\0' && res2)
	{
		res2 = isalnum(t2[i]);
		i++;
	}
	printf("T2: %d (%d)\n", res, res2);

	// T3
	i = 0;
	res = 1;
	while (t3[i] != '\0' && res)
	{
		res = ft_isalnum(t3[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t3[i] != '\0' && res2)
	{
		res2 = isalnum(t3[i]);
		i++;
	}
	printf("T3: %d (%d)\n", res, res2);

	// T4
	i = 0;
	res = 1;
	while (t4[i] != '\0' && res)
	{
		res = ft_isalnum(t4[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t4[i] != '\0' && res2)
	{
		res2 = isalnum(t4[i]);
		i++;
	}
	printf("T4: %d (%d)\n", res, res2);

	// T5
	i = 0;
	res = 1;
	while (t5[i] != '\0' && res)
	{
		res = ft_isalnum(t5[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t5[i] != '\0' && res2)
	{
		res2 = isalnum(t5[i]);
		i++;
	}
	printf("T5: %d (%d)\n", res, res2);

	// T6
	i = 0;
	res = 1;
	while (t6[i] != '\0' && res)
	{
		res = ft_isalnum(t6[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t6[i] != '\0' && res2)
	{
		res2 = isalnum(t6[i]);
		i++;
	}
	printf("T6: %d (%d)\n", res, res2);
}

int	test_ft_isalpha(void)
{
	char	t1[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "!@#$^&*()_1234567890";
	char	t3[] = "1234567890";
	char	t4[] = "	1234567890";
	char	t5[] = " ";
	char	t6[] = "";
	int		res;
	int		res2;
	int		i;

	// T1
	i = 0;
	res = 1;
	while (t1[i] != '\0' && res)
	{
		res = ft_isalpha(t1[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t1[i] != '\0' && res2)
	{
		res2 = isalpha(t1[i]);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// T2
	i = 0;
	res = 1;
	while (t2[i] != '\0' && res)
	{
		res = ft_isalpha(t2[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t2[i] != '\0' && res2)
	{
		res2 = isalpha(t2[i]);
		i++;
	}
	printf("T2: %d (%d)\n", res, res2);

	// T3
	i = 0;
	res = 1;
	while (t3[i] != '\0' && res)
	{
		res = ft_isalpha(t3[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t3[i] != '\0' && res2)
	{
		res2 = isalpha(t3[i]);
		i++;
	}
	printf("T3: %d (%d)\n", res, res2);

	// T4
	i = 0;
	res = 1;
	while (t4[i] != '\0' && res)
	{
		res = ft_isalpha(t4[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t4[i] != '\0' && res2)
	{
		res2 = isalpha(t4[i]);
		i++;
	}
	printf("T4: %d (%d)\n", res, res2);

	// T5
	i = 0;
	res = 1;
	while (t5[i] != '\0' && res)
	{
		res = ft_isalpha(t5[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t5[i] != '\0' && res2)
	{
		res2 = isalpha(t5[i]);
		i++;
	}
	printf("T5: %d (%d)\n", res, res2);

	// T6
	i = 0;
	res = 1;
	while (t6[i] != '\0' && res)
	{
		res = ft_isalpha(t6[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t6[i] != '\0' && res2)
	{
		res2 = isalpha(t6[i]);
		i++;
	}
	printf("T6: %d (%d)\n", res, res2);
}

int	test_ft_isascii(void)
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
	i = -20;
	res = 1;
	while (i < 130 && res)
	{
		res = ft_isascii(i);
		i++;
	}
	printf("T1: %d ()\n", i);
	i = -20;
	res2 = 1;
	while (i < 130 && res)
	{
		res2 = isascii(180);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);
}

int	test_ft_isdigit(void)
{
	char	t1[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	t2[] = "!@#$^&*()_1234567890";
	char	t3[] = "1234567890";
	char	t4[] = "	1234567890";
	char	t5[] = " ";
	char	t6[] = "";
	int		res;
	int		res2;
	int		i;

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

































int	test_ft_tolower(void)
{
	printf("A -> %c (%c)\n", ft_tolower('A'), tolower('A'));
	printf("Z -> %c (%c)\n", ft_tolower('Z'), tolower('Z'));
	printf("a -> %c (%c)\n", ft_tolower('a'), tolower('a'));
	printf("z -> %c (%c)\n", ft_tolower('z'), tolower('z'));
	printf("- -> %c (%c)\n", ft_tolower('-'), tolower('-'));
	printf("P -> %c (%c)\n", ft_tolower('P'), tolower('P'));
}

int	test_ft_toupper(void)
{
	printf("A -> %c (%c)\n", ft_toupper('A'), toupper('A'));
	printf("Z -> %c (%c)\n", ft_toupper('Z'), toupper('Z'));
	printf("a -> %c (%c)\n", ft_toupper('a'), toupper('a'));
	printf("z -> %c (%c)\n", ft_toupper('z'), toupper('z'));
	printf("- -> %c (%c)\n", ft_toupper('-'), toupper('-'));
	printf("P -> %c (%c)\n", ft_toupper('P'), toupper('P'));
}