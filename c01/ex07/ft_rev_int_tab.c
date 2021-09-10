/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:45:10 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/09 12:45:10 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	tmp;
	int	i;

	c = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[c];
		tab[c] = tmp;
		c--;
		i++;
	}
}