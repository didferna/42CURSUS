/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:21:12 by didac             #+#    #+#             */
/*   Updated: 2025/01/25 14:37:14 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
int main(void)
{
	//size_t i = 0;
    size_t n = 4;
	char	src[] = "hola pepe";
	char	dst[15];

	while (i < 15)
	{
		dst[i] = 'x';
		i++;
	}
	printf("dest vacio: %s \n",dst);
	ft_memcpy(dst, src, n);
	printf("src copiado: %s \n",dst);
	printf("esto es src: %s \n",src);
}*/
