/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:58:06 by didferna          #+#    #+#             */
/*   Updated: 2024/12/21 18:06:11 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min ++;
	}
	return (array);
}

/*#include <stdio.h>
int	main(void)
{
	int	min = 5;
	int	max = 16;
	int	i = 0;
	int	*result = ft_range(min, max);

	while (i < (max - min )) 
	{	
		printf("result= %d\n",result[i]);
		i++;
	}
	free (result);
	return (0);
}*/
