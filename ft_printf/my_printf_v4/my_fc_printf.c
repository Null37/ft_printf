/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_fc_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 11:53:01 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/08 15:45:35 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_isdigit(int number)
{
	if (number >= '0' && number <= '9')
	{
		return (1);
	}
	else
		return (0);
}

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

int	ft_strlen(char const *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

void  ft_putstr(const char *s, t_strct *var)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i], var);
			i++;
		} 
	}
}

void		ft_putchar(const char c, t_strct *var)
{
	write(1, &c, 1);
	var->ret++;
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
	char	c;

	num = nbr;
	if (nbr < 0)
	{
		write (1, "-", 1);
		num = num * -1;
	}
	if (num < 10)
	{
		c = num + 48;
		write (1, &c, 1);
	}
	if (num >= 10)
	{
		c = num % 10 + 48;
		ft_putnbr(num / 10);
		write(1, &c, 1);
	}
	ret = numblen(nbr);
	return(ret);	
}
int	ft_atoi(const char *str)
{
	long long	i;
	long long	save;
	long long	x;

	x = 1;
	i = 0;
	save = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' && str[i + 1] != '+')
	{
		x = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		save = save * 10 + (str[i] - 48);
		i++;
	}
	return (save * x);
}
