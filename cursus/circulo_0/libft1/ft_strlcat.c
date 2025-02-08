/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 23:19:26 by didac             #+#    #+#             */
/*   Updated: 2025/01/09 19:44:18 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return(i);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i] != '\0')
		i++;
	if (i == dstsize)
		return (i + ft_strlen(src));
	while ((i + j + 1) < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((i + j) < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*#include <stdio.h>
int     main(void)
{
    size_t      dstsize = 12;
    char    src[] = "holaa";
    char    dst[20] = "holaa";
    size_t result = ft_strlcat(dst, src, dstsize);
    printf ("esto es src: %s \n",src);
    printf ("esto es dst: %s \n", dst);
    printf ("esto es el tamanyo: %zu \n", result);
    return (0);
}*/
