/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:28:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 17:51:18 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, unsigned int n)
{
	int i;

	(char *) src;
	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "phrase de test a afficher";
   char dest[50] = "a remplacer";
   printf("Avant dest = %s\n", dest);
   memcpy(dest, src, 25+1);
   printf("Apres dest = %s\n", dest);
   
   return(0);
}