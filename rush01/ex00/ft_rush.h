/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:44:36 by bfabri            #+#    #+#             */
/*   Updated: 2021/09/19 20:20:23 by bfabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <stdio.h>
# include <unistd.h>

void	rush(char *str);

void	ft_putchar(char c);

int		check_row(int tab[6][6], int row, int side_int);

int		check_row_reverse(int tab[6][6], int row, int side_int);

int		check_column(int tab[6][6], int col, int side_int);

int		check_column_reverse(int tab[6][6], int col, int side_int);

void	display_array(int tablo[6][6]);

int		*ft_split_arg(int *dest, char *src, unsigned int n);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

int		check_missing_number_row(int tab[6][6], int row);

int		check_missing_number_col(int tab[6][6], int col);

void	init_array(int tablo[6][6]);

int		ft_split_arg_loop(char *str, int tab[6][6]);

void	insert_row(int tab[6][6], int *list, int col);

void	insert_col(int tab[6][6], int *list, int row);

#endif
