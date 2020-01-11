/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 22:02:42 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/08 12:20:54 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"

void	flag_c(const char *str, va_list header, t_strct *var)
{
	var->padding = 0;
	var->space = 0;
	while(str[var->i] != '%')
		(var->i)--; 
	(var->i)++;
	if (str[var->i] == '-')
		var->padding = 1;
	while(str[var->i] == '-')
		var->i++;
	if (ft_isdigit(str[var->i]) == 1)
	{
		var->space = ft_atoi(str + var->i) - 1;
		var->i = var->i + numblen(var->space);
	}
	else if (str[var->i] == '*')
	{
		var->space =  va_arg(header, int);
		if (var->space < 0)
		{
			var->padding = 1;
			var->space *= -1;
		}
		var->space--;
		var->i++;
	}
	if (var->padding == 0)
		print_space(var);
	print_c(header, var);
	if (var->padding == 1)
		print_space(var);
	while (str[var->i] == '.')
		var->i++;
}
void print_space(t_strct *var)
{
	while (var->space > 0)
	{
		ft_putchar(' ', var);
		var->space--;
	}
}
void print_c(va_list header, t_strct *var)
{
	var->argchar = va_arg(header, int);
	ft_putchar(var->argchar, var);
}

char check_conv(const char *str, int *i)
{
	while(!(ft_strrchr("cspdiuxX%", str[*i])))
	{
		(*i)++;
	}
	return (str[*i]);
}
