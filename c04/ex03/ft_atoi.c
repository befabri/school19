/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:01:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/18 12:42:17 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ispace(char c)
{
	if (c == '\f' || c == '\t' || c == ' ' ||
			c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int ft_atoi(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0' && ft_ispace(str[c]))
	{
		c++;
	}
	
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	test[] = "test message lol";
	ft_atoi(test);
	printf("\n");
	return (0);
}