/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 11:30:00 by didferna          #+#    #+#             */
/*   Updated: 2025/01/25 14:43:27 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*itoa convierte un int en un char sencillamente hace eso:
 * como esta estructurado i como lo he echo paso a paso
 * 1-compruevo sie l numero es mayor meno o igual a 0 para hacer
 * una cosa o otra
 *2- almaceno la n en otra variable
 3 cuento cuantos numeros tengo para asi poder saber el tamayo de la memoria 
 que necesitaria para almacenar el contenido de la string. Esto lo hago 
 dividiendo
 varias veces entre 10 asi se cuanto me da .
 4- despues compruevo sie l numero es negativo si es negativo lo paso a 
 positivo
para poder tarbajr con el.
5- conviero el numero de int a char devuelvo el resultado i le aaseguo el \0 
al final de la cadena .*/
#include "libft.h"

static char	*ft_convert(long tmp, char *str, int size)
{
	if (tmp == 0)
	{
		str [0] = tmp % 10 + '0';
		size++;
	}
	while (tmp > 0)
	{
		str[size - 1] = (tmp % 10 + '0');
		tmp = tmp / 10;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	tmp;

	i = 0;
	if (n == 0 || n < 0)
		i++;
	tmp = (long) n;
	while (n != 0)
	{
		n = n / 10;
		i ++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (tmp < 0)
	{
		str[0] = '-';
		tmp = tmp * -1;
	}
	ft_convert(tmp, str, i);
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	int	n = 42;
	char *result = ft_itoa(n);
	printf ("resultado: %s \n", result);
	free(result);
	return (0);
}*/
