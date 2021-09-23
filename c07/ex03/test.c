/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:46:32 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/23 16:41:43 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != "\0")
	{
		i++;
	}
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i])
			len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1;
	printf("-> %d\n", len);
	if (size <= 0)
		len = 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

#include <stdio.h>

int main	(void)
{    
    char *strcat;
    char *strs[3];
    strs[0] = "ab";
    strs[1] = "cd";
    strs[2] = "ef";

    strcat = ft_strjoin(4, strs, "-");
	if (strcat == NULL)
		printf("OK\n");
	else
		printf("KO\n");
	strcat = ft_strjoin(3, strs, "-");
    printf("strcat = %s\n",strcat);
	printf("\n");
    return(0);
}
