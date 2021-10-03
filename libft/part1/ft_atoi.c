/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:58:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/03 20:52:20 by bfabri           ###   ########.fr       */
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
	while (str[c] != '\0' && ft_ispace(str[c]))
	{
		c++;
	}
	while (str[c] == '-' || str[c] == '+')
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

// #include <stdio.h>

// int	main(void)
// {
// 	char	test[] = "   +-   ----++++++++++++++++++++++1234ab567";
// 	int	nbr = ft_atoi(test);

// 	printf("%d\n", nbr);
// 	printf("\n");
// 	return (0);
// }
