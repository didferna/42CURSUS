/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:43:47 by didac             #+#    #+#             */
/*   Updated: 2025/01/04 18:08:54 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void *ft_memset(void *b, int c, size_t len)
{
    size_t		i;
	unsigned char	value;
	unsigned char	*ptr

	i = 0;
	value = (unsigned char) c;
	ptr = (unsigned char*) b;
	while (i < len)
	{
		ptr[i] = value ;
		i++;
	}
	return (b);
}

int main(void)
{
	size_t i= 0;
	size_t len = 10;//es el numero de veces que lo rellenaremos
    int c = 'A'; // valor que se introducira
    unsigned char *b = (unsigned char *) malloc (sizeof (unsigned char) * len);
	 ft_memset(b, c, len);
	 while (i < len)
	 {
		printf("result: %d  %c\n", b[i], b[i]);
		  
		i++;
	 }

	 free(b); 
	return(0);
}