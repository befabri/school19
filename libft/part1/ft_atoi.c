/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/08 14:22:24 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ispace(char c)
{
	if (c == '\f' || c == '\t' || c == ' '
		|| c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	c;
	int	nb;
	int	signe;

	nb = 0;
	c = 0;
	signe = 1;
	if (ft_ispace(str[c]))
	{
		c++;
	}
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			signe *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		nb = nb * 10 + (str[c] - '0');
		c++;
	}
	return (nb * signe);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
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
