/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:39:37 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/28 02:01:03 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_test(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'z')
				ft_putchar('a');
			else
				ft_putchar(str[i]+1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'Z')
				ft_putchar('A');
			else
				ft_putchar(str[i]+1);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	search(char c, char *occ)
{
	int i;
	i = 0;
	while (occ[i] != '\0')
		{
			if (occ[i] == c)
				return (1);
			i++;
		}
	return (0);
}
void	find_occ(char *str, char *find)
{
	int i;
	int c;
	int size;

	i = 0;
	while (find[i] != '\0')
	{
		i++;
	}
	char occ[i];
	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		c = 0;
		while (find[c] != '\0')
		{
			if (str[i] == find[c] && !search(str[i], occ))
			{
				occ[size] = str[i];
				size++;
			}
			c++;
		}
		i++;
	}
	i = 0;
	while (occ[i] != '\0')
	{
		ft_putchar(occ[i]);
		i++;
	}
	ft_putchar('\n');	
}

char *ft_testrev(char *str)
{
	int a;
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	char *tmp;
	tmp = (char *) malloc(sizeof(char) * a+1);
	//char tmp[a];
	int c = 0;
	int s = a;
	while (a>0)
	{
		tmp[c] = str[a-1];
		a--;
		c++;
	}
	// a = 0;
	// while (tmp[a] != '\0')
	// {
	// 	str[a] = tmp[a];
	// 	a++;
	// }
	tmp[s+1] = '\0';
	return (tmp);
}

int	main(int argc, char *argv[])
{
	//char test[] = "abcdz ABCDZ";

	//to_test(test);
	
	/*char test[] = "Hello World";
	char to_find[] = "World";
	find_occ(test, to_find);*/
	char test[] = "Hello World";
	char *a;
	a = ft_testrev(test);
	printf("%s\n", a);
	return (0);
}