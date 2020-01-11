/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 22:02:42 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/06 14:44:46 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"

void flag_c(const char *str, va_list header, t_strct *var)
{
	while(str[var->i] != '%')
	{
		(var->i)--; 
	}
	(var->i)++;
	while (str[var->i] == '-' && ft_isdigit(str[var->i + 1]) == 0 && str[var->i + 1] != '*')
		var->i++;
	while (str[var->i] == '.' || str[var->i + 1] == '.')
		var->i++;
	if (ft_isdigit(str[var->i]) == 1)
	{
		var->www = va_arg(header, int);
		var->atoi = ft_atoi(&str[var->i]) - 1;
		while(ft_isdigit(str[var->i]) == 1)
			(var->i)++;
		while(var->atoi > 0)
		{
			ft_putchar(' ');
			var->atoi--;
		}
		ft_putchar(var->www);
	}	
	else if (str[var->i] == '-' && ft_isdigit(str[var->i + 1]) == 1)
	{
		var->www = va_arg(header, int);
		var->atoi = ft_atoi(&str[var->i + 1]) - 1;
		while(ft_isdigit(str[var->i]) == 1 || str[var->i] == '-')
			(var->i)++;
		ft_putchar(var->www);
		while(var->atoi > 0)
		{
			ft_putchar(' ');
			(var->atoi)--;
		}
	}
	else if (str[var->i] == '*')
	{
		var->etoil = va_arg(header, int);
		while (str[var->i] == '*')
			var->i++;
		while(var->etoil - 1 > 0)
		{
			ft_putchar(' ');
			var->etoil--;
		}
		var->www = va_arg(header, int);
		ft_putchar(var->www);
	}
	else if (str[var->i] == '-' && str[var->i + 1] == '*')
	{
		var->etoil = va_arg(header, int);
		var->www = va_arg(header, int);
		ft_putchar(var->www);
		while (str[var->i] == '-' && str[var->i + 1] == '*')
			var->i++;	
		var->i++;
		while(var->etoil - 1 > 0)
		{
			ft_putchar(' ');
			var->etoil--;
		}	
	}
	else if (str[var->i] == 'c')
	{
		print_c(header, *var);
	}
}

void print_c(va_list header, t_strct var)
{
	var.typearg = va_arg(header, int);
	ft_putchar(var.typearg);	
}

char check_conv(const char *str, int *i)
{
	while(!(ft_strrchr("cspdiuxX%", str[*i])))
	{
		(*i)++;
	}
	return (str[*i]);
}
