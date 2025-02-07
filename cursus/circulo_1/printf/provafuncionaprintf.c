/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   provafuncionaprintf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:27:28 by didferna          #+#    #+#             */
/*   Updated: 2025/02/07 17:41:23 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	main(void)
{
	char	str[0] = "";
	char	str1[] = "esto es str";
	printf("%s", str);
	printf("%s", str1);

	printf("prova con u %u", -1);
	printf("\n");
	printf("holaaa\n");
	int x = 10;
	printf("El valor de x es: %d\n", x);  // Imprime: El valor de x es: 10
	float pi = 3.14159;
	printf("El valor de pi es: %f\n", pi);  // Imprime: El valor de pi es: 3.141590
	char letra = 'A';
	printf("La letra es: %c\n", letra);  // Imprime: La letra es: A
	char *nombre = "Juan";
	printf("Mi nombre es: %s\n", nombre);  // Imprime: Mi nombre es: Juan
	
	/* AL PONER | % loquesea d | En este caso, %5d indica que el número entero 
	 * debe imprimirse en un campo de al menos 5 caracteres de ancho. Si el número es más 
	 * corto que 5 caracteres, printf añadirá espacios en blanco a la izquierda para que el 
	 * total de caracteres impresos sea 5.  
	int a = 5;
	printf("|%5d|\n", a);  // Imprime: |    5|  (5 espacios antes del número)*/
	
	printf("|%4d|\n", 23);





	return (0);
}
