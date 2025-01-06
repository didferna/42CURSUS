/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 20:58:01 by didac             #+#    #+#             */
/*   Updated: 2025/01/04 19:06:41 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include <string.h>

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (src[i] != '\0')
    {
        if(i < dstsize - 1)
            dst[i] = src[i];
        i++;
    }
    if (dstsize > 0)
       dst[i] = '\0';
    return(i);
}
#include <stdio.h>
int     main(void)
{
    size_t dstsize = 3;
    char src[] = "pejjjcd po";
    char dst[10];
    size_t result = ft_strlcpy(dst, src, dstsize);
    printf("esto es src  %s \n", src);
    printf("esto es src  %s \n", dst);
    printf("esto es src  %zu \n", result);
    return (0);
}