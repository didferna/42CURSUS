/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:00:09 by didferna          #+#    #+#             */
/*   Updated: 2024/12/24 12:38:40 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

/*#include <stdio.h>
int	main(void)
{
	int	nb = 5;
	int	result = ft_recursive_factorial(nb);
	printf("result: %d \n", result);
	return(0);
}*/
