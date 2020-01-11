/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 11:35:50 by ssamadi           #+#    #+#             */
/*   Updated: 2019/12/30 21:11:58 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#define long_t unsigned long long

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>


int    ft_printf(const char *str, ...);
size_t ft_strlen(char const *str);
void   ft_putchar(char c);
int    ft_putstr(const char *str);
char   *ft_itoa(int nbr);
char   *ft_strrchr(const char *str, int n);
int    ft_putnbr(int nbr);
#endif
