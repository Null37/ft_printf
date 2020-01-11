/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 15:30:40 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/08 14:35:33 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	t_strct var;
	va_list header;
	va_start(header, str);
	var.ret = 0;
	var.i = 0;
	while (str[var.i])
	{
		if (str[var.i] == '%' && str[var.i + 1] == '%')
		{
			ft_putchar('%', &var);
			var.i++;
		}
		else if (str[var.i] != '%')
		{
			ft_putchar(str[var.i], &var);
		}
		else 
		{
			var.i++;
			if (check_conv(str, &var.i) == 'c')
			{
				flag_c(str, header, &var);
			}
			if (check_conv(str, &var.i) == 's')
			{
				flag_s(str, header, &var);
			}
		}
		var.i++;
	}	
	return (var.ret);
}
