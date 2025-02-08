/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:22:04 by didferna          #+#    #+#             */
/*   Updated: 2025/01/25 13:51:30 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* esta funcion tranforma un char en un int sin tener en cuenta los espacios
 * es decir se los salta i tiene en cuenta si es positivo o negativo.
 * cuando encuentra una cosa que no es una letra despuesde de los primeros 
 * simbolos - + se trunca i no escribe nada mas. Retorna el resultado
 * de la conversion de char a int.*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int					i;
	int					sign;
	unsigned long int	result;	

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || ((nptr[i] >= '\t') && (nptr[i] <= '\r')))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10;
		result = result + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	const char 	nptr[] = "    -12+3d3";
    printf("antes del resultado:%s \n", nptr);	
	int	result = ft_atoi(nptr);
	printf("esto deberia ser el resultado:%i \n", result);
	return (0);
}*/
