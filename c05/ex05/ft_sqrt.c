/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:54:12 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/21 11:38:08 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int        ft_sqrt(int index);

int        main(void)
{
	int i = 2147483609;
	printf("%d -> %d\n", i, ft_sqrt(i));
}