/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 21:58:34 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/05 22:24:49 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_FLAG_FC_H
# define MY_FLAG_FC_H

typedef struct
{
	int i;
	int typearg;
	int atoi;
	int www;
	int etoil;
}		t_strct;

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "printf.h"

void flag_c(const char *str, va_list header, t_strct *var);
void print_c(va_list header, t_strct var);
char check_conv(const char *str, int *i);

#endif
