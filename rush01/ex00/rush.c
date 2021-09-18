/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:01:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/18 18:46:48 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	*ft_split_arg(int *dest, char *src, unsigned int n)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (src[c] != '\0' && d < n)
	{
		//printf("%c\n", src[c]);
		if (src[c] != ' ')
		{
			dest[d] = src[c] - '0';
			d++;
		}		
		c++;
	}
	return (dest);
}
void	boucle(int tablo[6][6])
{
	int y;
	int x;
	int	r;
	int	c;

	x = 5;
	y = 5;
	r = 1;
	while (r < y)
	{
		c = 1;
		while (c < x)
		{
			if (r == 1)
			{
				if (tablo[r-1][c] == 4)
					tablo[r][c] = 1;
				if (tablo[r-1][c] == 1)
					tablo[r][c] = 4;
			}
			if (c == 1)
			{
				if (tablo[r][c-1] == 4)
					tablo[r][c] = 1;
				if (tablo[r][c-1] == 1)
					tablo[r][c] = 4;
			}
			if (c == 5)
			{
				if (tablo[r][c+1] == 4)
					tablo[r][c] = 1;
				if (tablo[r][c+1] == 1)
					tablo[r][c] = 4;
			}
			//printf("%d ",tablo[r][c]);
			c++;
		}
		//printf("\n");
		r++;
	}
}

void	completer(int tablo[6][6])
{
	int y;
	int x;
	int	r;
	int	c;

	x = 5;
	y = 5;
	r = 1;
	while (r < y)
	{
		c = 1;
		while (c < x)
		{
			if (tablo[r][c] == 0)
			{
				if (c == 1)
				{
					if (tablo[r][4] == 4)
					{
						tablo[r][1] = 3;
						tablo[r][2] = 2;
						tablo[r][3] = 1;
					}
						
				}
				if (c == 4)
				{
					if (tablo[r][1] == 4)
					{
						tablo[r][4] = 3;
						tablo[r][3] = 2;
						tablo[r][2] = 1;
					}
				}
			}
			c++;
		}
		r++;
	}
}

void	display_array(int tablo[6][6])
{
	int	i;
	int	j;

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d ",tablo[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void	rush(void)
{
	int tablo[6][6] = {
		{0,4,3,2,1,0},
		{4,0,0,0,0,1},
		{3,0,0,0,0,2},
		{2,0,0,0,0,2},
		{1,0,0,0,0,2},
		{0,1,2,2,2,0}
	};
	display_array(tablo);
	boucle(tablo);
	display_array(tablo);
	completer(tablo);
	display_array(tablo);
}

int	main(void)
{
	rush();
	return (0);
}