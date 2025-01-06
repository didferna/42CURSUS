/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 12:24:54 by didac             #+#    #+#             */
/*   Updated: 2024/12/26 15:22:54 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    int  i;
    unsigned char *d;
    unsigned char *s;
    unsigned char cc;

    d = (unsigned char *) dst;
    s = (unsigned char *) src;
    cc = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == cc)
            return (d + i + 1);
        i++;    
    }
    return (NULL);
}
#include <stdio.h>
int main(void)
{
    char    src[] = "PEPOTE pepota";
    char    dst[15];
    int     c = 1;
    size_t  n =  7;
    printf ("dest vacio: %s \n", dst);
    void *result = ft_memccpy(dst,src , c, n);
    printf ("dest copiado: %s \n", dst);
    printf ("es src: %s \n", src);
    printf ("no ha encontrado c: %p \n",result);
}