/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 21:58:34 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/03 23:03:28 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_FLAG_FC_H
# define MY_FLAG_FC_H

typedef struct
{
	int i;
	int save;
	int ret;
	int retstr;
	int retnbr;
	int percent_c;
	int percent_etoil;
	int at;
}		t_pnf;

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "printf.h"

char  check_percent_c(const char *str, int *i);
char  check_conv(const char *str, int *i);
void check_flags(const char *str, t_pnf *ft, va_list header);
void  Percent_sign_C(va_list header, int *i);
void check(const char *str,t_pnf *ft);
int   Percent_sign_S(va_list header);
int   Percent_sign_d(va_list header);

#endif
