/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:12:33 by didac             #+#    #+#             */
/*   Updated: 2025/01/01 20:58:11 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>

  char     *ft_strrchr( char *s, int c)
{
    int     i;

    i = 0;
    while (s[i] != '\0')
        i++;
    i --;
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return (s + i);
        i --;
    }
    if (c == '\0')
        return (s + i);
    return (NULL);
}
#include <stdio.h>
int     main(void)
{
    char    s[] = "hola mundo";
    char    s1[] = "pepe 3";
    char    s2[] = "no encuentra";
    char    s3[] = "esto sera nulo";
    int     c = 'o';
    int     c1 = '3';
    int     c2 = 'w';
    int     c3 = '\0';
    char    *result = ft_strrchr(s, c);
    char    *result1 = ft_strrchr(s1, c1);
    char    *result2 = ft_strrchr(s2, c2);
    char    *result3 = ft_strrchr(s3, c3);
    printf("result normal: %s \n", result);
    printf("resul el num: %s \n ", result1);
    if(result2 == NULL)
        printf("ESTO ES QUE ES NULL \n");
    if(result3 != NULL)
        printf("RESULTADO ES 0 lo ha encontrado ");
    return (0);
}