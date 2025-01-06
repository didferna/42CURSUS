/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 21:05:06 by didac             #+#    #+#             */
/*   Updated: 2025/01/01 19:12:09 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include <string.h>

char    *ft_strchr(const char *s, int c)
{
    int	i;
	char cc;

	cc = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return (s + i);
		i++;
	}
	if (cc == '\0')
			return (s + i);
	return (NULL);
}

#include <stdio.h>
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
}