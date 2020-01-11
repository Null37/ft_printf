/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 21:58:34 by ssamadi           #+#    #+#             */
/*   Updated: 2019/12/30 21:12:22 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_FLAG_FC_H
# define MY_FLAG_FC_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "printf.h"


char  check_flags(const char *str, int *i);
void  Percent_sign_C(va_list header, int *i);
int   Percent_sign_S(va_list header);
int   Percent_sign_d(va_list header);

#endif
