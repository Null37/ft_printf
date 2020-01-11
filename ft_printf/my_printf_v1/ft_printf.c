/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 15:30:40 by ssamadi           #+#    #+#             */
/*   Updated: 2019/12/30 21:43:15 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"

int ft_printf(const char *str, ...)
{
	int i;
	int ret;
	int retstr;
	int retnbr;
	va_list header;
	va_start(header, str);

	i = 0;
	ret = 0;
	retstr = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '%')
		{
			ft_putchar('%');
			ret++;
			i++;
		}
		else if (str[i] != '%')
		{
			ft_putchar(str[i]);
			ret++;
		}
		else
		{
			i++;
			if (check_flags(str, &i) == 'c')
			{
				Percent_sign_C(header, &ret);
			}
			if (check_flags(str, &i) == 's')
			{
				retstr = Percent_sign_S(header);
			}
			if (check_flags(str, &i) == 'd')
			{
				retnbr = Percent_sign_d(header);
			}
		}
		i++;
	}
	return (ret + retstr + retnbr);
}
