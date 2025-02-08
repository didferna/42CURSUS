/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 21:05:06 by didac             #+#    #+#             */
/*   Updated: 2025/01/25 14:27:58 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strchr busca el carácter c en la 
 * cadena str y devuelve un puntero a la primera 
ocurrencia de ese carácter en la cadena. Si el carácter no se encuentra, 
devuelve NULL.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;
	char			*ss;

	ss = (char *)s;
	cc = (unsigned char) c;
	while (*ss)
	{
		if (*ss == cc)
			return (ss);
		ss++;
	}
	if (cc == '\0')
		return (ss);
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char	s[] = "hola mundo";
	char	s1[] = "prueva 2";
	char	s2[] = "abc";
	char	s3[] = "hhhhsg5";
	char		c = 'o';
	char		c1 = '2';
	char		c2 = 's';
	char		c3 = '\0';

	char *result = ft_strchr(s, c);
	char *result1 = ft_strchr(s1, c1);
	char *result2 = ft_strchr(s2, c2);
	char *result3 = ft_strchr(s3, c3);
	printf ("result: %c \n ", *result);
	printf ("result: %c \n ", *result1);
	if (result2 == NULL)
		printf ("result es NULL \n ");
	if (*result3 == '\0')
		printf ("result es final");
	return (0);
}*/
