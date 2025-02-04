/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:10:20 by didferna          #+#    #+#             */
/*   Updated: 2024/12/24 12:15:57 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb = -1 ;
	int	result = ft_iterative_factorial(nb);
	printf("result: %d\n", result);
	return(0);
}*/	
