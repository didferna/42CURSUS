/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maint_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:28:27 by didferna          #+#    #+#             */
/*   Updated: 2025/02/08 19:48:52 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	printf("PRUEVA DE ESRIBIR NORMAL\n");
	ft_mn_printf("\n\n\n");
	ft_mn_printf("hola mundo\n");
	printf("hola mundo \n");



	printf("PRUEVA DE STRING VACIO\n");
	ft_mn_printf("\n\n\n");
	ft_mn_printf("");
	printf("");


	printf("LE PASO ESCRITO NULL\n");
	ft_mn_printf("\n\n\n");
	ft_mn_printf("NULL\n");
	printf("NULL\n");

	printf("ESCRRIBE UN CHAR\n");
	ft_mn_printf("\n\n\n");
	char letra = 'A';
	ft_mn_printf("La letra es: %c\n", letra);
        printf("La letra es: %c\n", letra);

	printf("ESCRIBE UN UNSIGNED CHAR\n");
	ft_mn_printf("\n\n\n");
	ft_mn_printf("prova con u %u\n", -1);
	printf("prova con u %u\n", -1);
	ft_mn_printf("prova 2 con u %u\n", 5546);
	printf("prova 2 con u %u\n", 5546);


	printf("ESCRIBE UNA STRING\n");
	ft_mn_printf("\n\n\n");
	char    str1[] = "esto es str";
	ft_mn_printf("%s\n",str1);
        printf("%s\n", str1);


	printf(" ESCRIBE UN  percent \n");
	ft_mn_printf("\n\n\n");
	ft_mn_printf("%%\n");
	printf ("%%\n");



	printf("ESCRIBE UN percent MAS LETRAS DESPUES\n");
	ft_mn_printf("%%%%ppp\n");
	printf("%%%%ppp\n");
     




}
