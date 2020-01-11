/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:48:38 by ssamadi           #+#    #+#             */
/*   Updated: 2020/01/11 15:12:10 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "my_flag_fc.h"
#include <stdio.h>
#define S "a%*.0000sa", -15, "ABC"
int main()
{
	//char *str = "zero";i
	int f = 0;
	int i = 0;
	f =  ft_printf(S);
	printf("\n");
	i = printf(S);
	/*printf("hello %s \n", "zero");
	printf("hello %--------------s \n", "zero");
	printf("hello %9s \n", "zero");
	printf("hello %-9s \n", "zero");
	printf("hello %------9s \n", "zero");
	printf("hello %------*s \n",2, "zero");
	printf("hello %------*.0s \n",2, "zero");*/
	printf("\n");
	printf("|%d| |%d|", i, f);
}
