/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:48:38 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/06 14:59:30 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"
#include <stdio.h>
int main()
{
	char *str;
	str = NULL;
	/*
	ft_re = ft_printf("is my ft_printf %c %c %s %d",'c', 'k', "hello", 123);
	printf("\n");
	*/
	//re = priintf("is printf %5c",'k');i
	//ft_printf("%*c",5, 'k');
	ft_printf("is your printf %5.c\n",'k');
	printf("is printf %5.c", 'k');
	//printf("\n");
	/////////////////// part streln////////i/////
	/*
	printf("this is your printf	||%d||", ft_re);
	printf("\n");
	printf("normal printf ||%d||", re);
	*/
	///////////////////////////////////////////
}
