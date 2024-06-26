/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:25:55 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/20 11:02:40 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	if (n == 0)
		return (0);
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c] && c < n - 1)
	{
		 c++;
	}
	if (s1[c] == '\0' && s2[c] == '\0')
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}
