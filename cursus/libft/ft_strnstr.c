/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:50:20 by didac             #+#    #+#             */
/*   Updated: 2025/01/04 18:08:51 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*si no encuentra la ocurrencia retorna NULL  o si esta mas tarde de len tambien retorna NULL. Si la encuentra,
devuelve un puntero a la posicion de la ocurrencia .*/

#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t      i;
    size_t      j;

    i = 0;
    if(*neddle == '\0')
        return((char*) haystack);
    while(haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while(needle[j] != '\0' && haystack[i + j] == needle[j] && \
            (i + j) < len)
            {
                j++;
                if(needle[j] == '\0')
                    return((char*)haystack + i);
            }
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
int     main(void)
{
    const char  haystack[] = "hola mundo acuatico";
    const char  needle[] = "mundo";

    size_t      len = 6;
    char *result = ft_strnstr(haystack, needle, len);
    if (result)
    {
        size_t position = result - haystack;
        printf("esto es needle %s i esto es la posicion %zu", needle, position);
    }
    else 
        printf("no se a encontrado needle: %s",needle);

    return (0);


}