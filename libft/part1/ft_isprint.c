/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:15:06 by bfabri            #+#    #+#             */
/*   Updated: 2021/10/01 13:31:36 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
	{
		return (0);
	}
	return (1);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char t1[] = "  !  # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~";
	char t2[] = "	";
	char t3[] = "";
	int res;
	int res2;
	int i;


	// 32 <-> 127
	i = 32;
	res = 1;
	while (i != 127 && res)
	{
		res = ft_isprint(i);
		i++;
	}
	i = 32;
	res2 = 1;
	while (i != 127 && res2)
	{
		res2 = isprint(i);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// -10 <-> 32
	i = -10;
	res = 1;
	while (i != 32 && res)
	{
		res = ft_isprint(i);
		i++;
	}
	i = -10;
	res2 = 1;
	while (i != 32 && res2)
	{
		res2 = isprint(i);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// 120 <-> 128
	i = 120;
	res = 1;
	while (i != 128 && res)
	{
		res = ft_isprint(i);
		i++;
	}
	i = 120;
	res2 = 1;
	while (i != 128 && res2)
	{
		res2 = isprint(i);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// T1
	i = 0;
	res = 1;
	while (t1[i] != '\0' && res)
	{
		res = ft_isprint(t1[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t1[i] != '\0' && res2)
	{
		res2 = isprint(t1[i]);
		i++;
	}
	printf("T1: %d (%d)\n", res, res2);

	// T2
	i = 0;
	res = 1;
	while (t2[i] != '\0' && res)
	{
		res = ft_isprint(t2[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t2[i] != '\0' && res2)
	{
		res2 = isprint(t2[i]);
		i++;
	}
	printf("T2: %d (%d)\n", res, res2);

	// T3
	i = 0;
	res = 1;
	while (t3[i] != '\0' && res)
	{
		res = ft_isprint(t3[i]);
		i++;
	}
	i = 0;
	res2 = 1;
	while (t3[i] != '\0' && res2)
	{
		res2 = isprint(t3[i]);
		i++;
	}
	printf("T3: %d (%d)\n", res, res2);
}