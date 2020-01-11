/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:48:38 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/03 16:58:03 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"
#include <stdio.h>
int main()
{
	char *str;
	int ft_re;
	int re;
	str = NULL;
	ft_re = ft_printf("is my ft_printf %-c %c %-s %-d",'\0', 'k', "hello", 123);
	printf("\n");
	re = printf("is printf %c %c %s %d", '\0', 'k',"hello", 123);
	printf("\n");
	/////////////////// part streln////////i/////
	printf("this is your printf	||%d||", ft_re);
	printf("\n");
	printf("normal printf ||%d||", re);
	///////////////////////////////////////////
}
