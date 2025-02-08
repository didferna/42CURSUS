/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:48:35 by didac             #+#    #+#             */
/*   Updated: 2025/01/25 13:52:14 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*asignamos memoria dinamica, para un cnjunto de elementos, i despues de ello
 * pone la memoria a 0 en cada punto de la memoria
 * tambien si es 0 tiene que devolvrme un puntero liberable que es 
 * malloc(0) , tiene que tener en cuenta SIZE_MAX  porque el tamanyo de
 * size_t es muy grande i por ese tiene que dividirlo entre count .*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*mll;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (SIZE_MAX / count < size)
		return (NULL);
	total = count * size;
	mll = malloc(total);
	if (!mll)
		return (NULL);
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
