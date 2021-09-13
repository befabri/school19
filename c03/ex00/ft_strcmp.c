/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:53:27 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/13 11:19:57 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int	c;
	
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && (unsigned char)s1[c] == (unsigned char)s2[c])
	 {
		 c++;
	 }
	 if  (s1[c] == '\0' && s2[c] == '\0')
	 {
		return (0);	 
	 }
	 return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
