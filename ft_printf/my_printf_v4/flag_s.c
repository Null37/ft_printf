/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:15:36 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/11 15:11:19 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"

void flag_s(const char *str, va_list header, t_strct *var)
{
	var->padding = 0;
	var->space = 0;
	var->point = 0;
	var->savepoint = 0;
	while (str[var->i] != '%')
	{
		var->i--;
	}
	var->i++;
	if (str[var->i] == '-')
		var->padding = 1;
	while(str[var->i]  == '-')
	{
		var->i++;
	}
	if (str[var->i] == '*' || ft_isdigit(str[var->i]))
	{
		if (str[var->i] == '*')
		{
			var->space = va_arg(header, int);
			if (var->space < 0)
			{
				var->padding = 1;
				var->space *= -1;
			}
			var->i++;
		}
		else
		{
			var->space = ft_atoi(str + var->i);
			var->i = var->i + numblen(var->space);
		}
	}
	if (str[var->i] == '.')
	{
		// point
		var->point = 1;
		var->i++;
	}
	if(str[var->i] == '*' || ft_isdigit(str[var->i]))
	{
		// precision
		if (str[var->i] == '*')
		{
			var->savepoint = va_arg(header, int);
			var->i++;
		}
		else
		{
			var->savepoint = ft_atoi(str + var->i);
			var->i = var->i + numblen(var->savepoint);
			while (str[var->i] == '0')
				var->i++;
		}
	}
   if (var->point == 0)
   {	   
		if (var->padding == 0)
		{
			print_space_s(var, header);
		}
		if (var->padding == 1)
		{
			print_space_s(var, header);
		}
   }
   else
   {
   		print_flag_point(header, var);
   }
}
void print_space_s(t_strct *var, va_list header)
{
	var->argstr = va_arg(header, char *);
	if ((var->saveargstr = var->argstr) == NULL)
	{
		var->saveargstr = "(null)";
	}
	var->savestreln  = ft_strlen(var->saveargstr);
	if (var->padding == 1)
	{
		ft_putstr(var->saveargstr, var);
	}
	while(var->space > var->savestreln)
	{
		ft_putchar(' ', var);
		var->space--;
	}
	if (var->padding == 0)
		ft_putstr(var->saveargstr, var);
}
void  print_flag_point(va_list header, t_strct *var)
{
	int  i;
	i = 0;
	var->argstr = va_arg(header, char *);
	if ((var->saveargstr =  var->argstr) == NULL)
	{
		var->saveargstr = "(null)";
	}
	var->savestreln  = ft_strlen(var->saveargstr);
	if (var->padding == 0)
	{
		int zero = (var->savepoint < 0 ? var->savestreln : var->savepoint);
		while (var->space > (var->savestreln > zero ?
				zero : var->savestreln))
		{
			ft_putchar(' ', var);
			var->space--;
		}
	}
	if (var->savepoint >= var->savestreln)
	{
		write(1, var->saveargstr, var->savestreln);
		var->ret =  var->savestreln + var->ret;
	}
	else
	{
		if (var->savepoint < 0)
		{
			write(1, var->saveargstr, var->savestreln);
			var->ret =  var->savestreln + var->ret;
		}
		else
		{
			write(1, var->saveargstr, var->savepoint);
			var->ret =  var->savepoint + var->ret;
		}
	}
	if (var->padding == 1)
	{
		int zero = (var->savepoint < 0 ? var->savestreln : var->savepoint);
		while (var->space > (var->savestreln > zero ?
				zero : var->savestreln))
		{
			ft_putchar(' ', var);
			var->space--;
		}
	}
}
