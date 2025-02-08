/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:06:18 by didferna          #+#    #+#             */
/*   Updated: 2025/01/14 11:16:08 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <stdio.h>
int	main(void)
{
	char	src[] = "holaajuan";
	char	dst[20];
	size_t	size = 20;
	size_t result = ft_strlcpy(dst, src, size);
	printf("esto es src: %s \n", src);
	printf("esto es dst: %s \n", dst);
	printf("esto es la i : %zu \n", result);
	return (0);
}*/
