/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:45:34 by didac             #+#    #+#             */
/*   Updated: 2024/12/25 18:57:13 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char		*ptr;
	
	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	size_t n = 5;
	size_t i = 0;
	unsigned char *s = (unsigned char *) malloc(sizeof(unsigned char) * n);
	ft_bzero(s, n);
	while (i < n)
	{
		printf("result %d\n",s[i]);
		i++;
	}
	free(s);
	return (0);
}