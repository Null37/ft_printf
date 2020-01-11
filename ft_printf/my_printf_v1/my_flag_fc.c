/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_flag_fc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 22:02:42 by ssamadi           #+#    #+#             */
/*   Updated: 2019/12/30 21:20:22 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"

char check_flags(const char *str, int *i)
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
