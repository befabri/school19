/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:52:33 by bfabri            #+#    #+#             */
/*   Updated: 2021/11/09 17:54:43 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTEST_H
# define LIBTEST_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
#include "../src/libft.h"

int		test_ft_atoi();
int		test_ft_bzero();
int		test_ft_calloc();
int		test_ft_isalnum();
int		test_ft_isalpha();
int		test_ft_isascii();
int		test_ft_isdigit();
int		test_ft_isprint();
int		test_ft_memchr();
int		test_ft_memcmp();
int		test_ft_memcpy();
int		test_ft_memmove();
int		test_ft_memset();
int		test_ft_split();
int		test_ft_strchr();
int		test_ft_strdup();
int		test_ft_strjoin();
int		test_ft_strlcat();
int		test_ft_strlcpy();
int		test_ft_strlen();
int		test_ft_strncmp();
int		test_ft_strnstr();
int		test_ft_strrchr();
int		test_ft_strtrim();
int		test_ft_substr();
int		test_ft_tolower();
int		test_ft_toupper();
int		test_ft_itoa();
int		test_ft_strmapi();
int		test_ft_striteri();
int		test_ft_putchar_fd();
int		test_ft_putstr_fd();
int		test_ft_putendl_fd();
int		test_ft_putnbr_fd();

#endif