/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 11:35:50 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/08 15:45:48 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#define long_t unsigned long long

# include <unistd.h>
# include <stdlib.h>
# include "my_flag_fc.h"
# include <stdarg.h>

int	   ft_isdigit(int number);
int    ft_printf(const char *str, ...);
int    ft_atoi(const char *str);
int     ft_strlen(char const *str);
void   ft_putchar(char c, t_strct *var);
void    ft_putstr(const char *str, t_strct *var);
char   *ft_itoa(int nbr);
char   *ft_strrchr(const char *str, int n);
int    ft_putnbr(int nbr);
int	   numblen(long long number);
#endif
