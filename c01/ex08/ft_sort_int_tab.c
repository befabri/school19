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

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	swap;

	swap = 1;
	while (swap == 1)
	{
		i = 0;
		swap = -1;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap = 1;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
