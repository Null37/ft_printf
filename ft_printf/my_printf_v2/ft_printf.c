/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 15:30:40 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/04 20:25:50 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	t_pnf ft;
	va_list header;
	va_start(header, str);

	ft.i = 0;
	ft.ret = 0;
	ft.retstr = 0;
	ft.retnbr = 0;
	ft.at = 0;
	while (str[ft.i])
	{
		if (str[ft.i] == '%' && str[ft.i + 1] == '%')
		{
			ft_putchar('%');
			ft.ret++;
			ft.i++;
		}
		else if (str[ft.i] != '%')
		{
			ft_putchar(str[ft.i]);
			ft.ret++;
		}
		else 
		{
			ft.i++;
				if (str[ft.i] == '-' && ft_isdigit(str[ft.i + 1]) == 1)
				{
					ft.percent_c = va_arg(header, int);
					ft.at = ft_atoi(&str[ft.i + 1]) - 1;
					while(ft_isdigit(str[ft.i]) == 1 || str[ft.i] == '-')
						ft.i++;
					ft_putchar(ft.percent_c);
					while (ft.at > 0)
					{
						ft_putchar (' ');
						ft.at--;
					}		
				}
				else if (ft_isdigit(str[ft.i]) == 1)
				{
					ft.percent_c = va_arg(header, int);
					 ft.at = ft_atoi(&str[ft.i]) - 1;
					 while (ft_isdigit(str[ft.i]) == 1)
						 ft.i++;
					 while (ft.at > 0)
					 {
						 ft_putchar(' ');
						 ft.at--;
					 }
					 ft_putchar(ft.percent_c);
				}
				else if (str[ft.i] == '*')
				{
					ft.percent_etoil = va_arg(header, int);
					while(ft.percent_etoil - 1)
					{
						ft_putchar(' ');
						ft.percent_etoil--;
					}
					ft.percent_c = va_arg(header, int);
					ft_putchar(ft.percent_c);
				}
				else if (str[ft.i] == '-' && str[ft.i + 1] == '*')
				{
					ft.percent_etoil = va_arg(header, int);
					ft.percent_c = va_arg(header, int);
					ft_putchar(ft.percent_c);
					while (ft.percent_etoil - 1)
					{
						ft_putchar(' ');
						ft.percent_etoil--;
					}
					ft.i++;
				}
				ft.i++;
			}
		ft.i++;
	}
	
	ft.save = ft.ret + ft.retstr + ft.retnbr;
	return (ft.save);
}
