/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 21:58:34 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/09 21:57:10 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_FLAG_FC_H
# define MY_FLAG_FC_H

typedef struct
{
	int i;
	int padding;
	int  space;
	int argchar;
	int ret;
	int savestreln;
	int point;
	int savepoint;
	int check;
	char *argstr;
	char *saveargstr;
}		t_strct;

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "printf.h"

void flag_c(const char *str, va_list header, t_strct *var);
void flag_s(const char *str, va_list header, t_strct *var);
void print_s(t_strct *var,va_list header);
void print_c(va_list header, t_strct *var);
char check_conv(const char *str, int *i);
void print_space(t_strct *var);
void print_space_s(t_strct *var,va_list header);
void  print_flag_point(va_list header, t_strct *var);

#endif
