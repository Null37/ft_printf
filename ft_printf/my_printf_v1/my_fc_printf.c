/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_fc_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 11:53:01 by ssamadi           #+#    #+#             */
/*   Updated: 2019/12/30 21:44:55 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	numblen(long long number)
{
	int			len;

	len = 0;
	if (number < 0)
	{
		number *= -1;
		len++;
	}
	if (number == 0)
	{
		len++;
	}
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

size_t	ft_strlen(char const *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

int	 ft_putstr(const char *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		} 
	}
	return (i);
}

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}
char	*ft_strrchr(const char *str, int n)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = ft_strlen(str);
	while (i - 1 >= 0 && p[i] != n)
	{
		i--;
	}
	if (p[i] == n)
	{
		return (p + i);
	}
	else
		return (NULL);
}

int  ft_putnbr(int nbr)
{
	size_t num;
	int ret;

	num = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	if (num < 10)
	{
		ft_putchar(num + 48);;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + 48);
	}
	ret = numblen(nbr);
	return(ret);	
}
