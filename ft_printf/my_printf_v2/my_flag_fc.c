/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 22:02:42 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/03 21:19:08 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"

void check(const char *str,t_pnf *ft)
{
	if (str[ft->i] == '-')
		ft->i++;
	if (ft_isdigit(str[ft->i + 1]) == 1)
	{
		ft->at = ft_atoi(&str[ft->i+1]) - 1;
		if (check_conv(str, &ft->i) == 'c')
			ft_putstr("hi");
		while (ft->at > 0)
		{
			ft_putchar(' ');
			ft->i--;
		}
	}

}
void check_flags(const char *str, t_pnf *ft, va_list header)
{
	ft->i++;
	if (ft_isdigit(str[ft->i]) == 1)
	{
		ft->at = ft_atoi(&str[ft->i])-1;
		while(ft->at > 0)
		{
		ft_putchar(' ');
			ft->at--;
		}
	}
	if (check_conv(str, &ft->i) == 'c')
		Percent_sign_C(header, &ft->ret);
	if (check_conv(str, &ft->i) == 's')
		ft->retstr = Percent_sign_S(header);
	if (check_conv(str, &ft->i) == 'd')
		ft->retnbr = Percent_sign_d(header);
}

char check_percent_c(const char *str, int *i)
{
	while(!(ft_strrchr("-*.", str[*i])))
	{
		(*i)++;
	}
	return (str[*i]);
}
char check_conv(const char *str, int *i)
{
	while(!(ft_strrchr("cspdiuxX%", str[*i])))
	{
		(*i)++;
	}
	return (str[*i]);
}

void  Percent_sign_C(va_list header , int *i)
{
	int charr = va_arg(header, int);
	ft_putchar(charr);
	*i = *i + 1; 
}

int  Percent_sign_S(va_list header)
{
	int ret;

	char *string = va_arg(header, char *);
	if (string == NULL)
	{
		write(1,"(null)",6);
		ret = 6;
	}
	else
		ret = ft_putstr(string);
	return (ret);	
}
int  Percent_sign_d(va_list header)
{
	int ret;

	int number = va_arg(header, int);
	ret = ft_putnbr(number);
	return (ret);
}	
