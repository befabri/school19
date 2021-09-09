/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:29:57 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/09 16:29:57 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int c;
	
	c = 0;
	while (c < (size - 1))
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		c++;
	}
}

int	main(void)
{
	int		test[] = {4, 2, 7, 8, 3, 1};
	int		size;
	int		c;

	size = 6;
	c = 0;
	printf("test[%d]-> ", size);
	while (c < size)
	{
		printf("%d", test[c]);
		c++;
	}
	printf("\n");
	ft_sort_int_tab(test, size);
	c = 0;
	printf("test[%d]-> ", size);
	while (c < size)
	{
		printf("%d", test[c]);
		c++;
	}
}
