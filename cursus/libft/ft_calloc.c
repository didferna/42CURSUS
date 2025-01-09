/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:48:35 by didac             #+#    #+#             */
/*   Updated: 2025/01/08 16:51:31 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total;
	void	*mll;

	i = 0;
	total = count * size;
	if (total == 0)
		return (NULL);
	mll = malloc(total);
	ft_memset(mll, 0, total);
	return (mll);
}

/*int	main(void)
{
	size_t	count = 0;
	size_t	size = 10;
	size_t	i= 0;
	void *res =ft_calloc(count, size);
	int *arr =(int *) res;
	if (arr == 0)
		printf("esto es un error");
	while (i < count)
	{
		printf("el array[%zu] = %d\n", i,arr[i]);
		i++;
	}
	free(res);
	return (0);
}*/