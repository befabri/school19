/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_text.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:15:52 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/23 00:19:55 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int main()
{

    int row_size;
	int col_size;
    int matrix[10][10];
    int r;
	int c;

	row_size = 10;
	col_size = 10;
	r = 0;
	c = 0;
    for(r=0;r<row_size;r++)
    {
        for(c=0;c<col_size;c++)
        {
            matrix[r][c] = -1;
        }
    }
int is_diagonal(int )
    int point=0;
    for(r=0;r<row_size;r++)
    {
        for(c=0;c<col_size;c++)
        {
			if(r!=c && matrix[r][c]!=0)
			{
				return (1);
			}
        }
    }
	return (0);
    if(point==1)
        printf("Given Matrix is not a diagonal Matrix.");
    else
        printf("Given Matrix is a diagonal Matrix.");
}