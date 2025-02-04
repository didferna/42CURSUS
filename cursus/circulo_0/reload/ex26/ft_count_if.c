/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:55:03 by didferna          #+#    #+#             */
/*   Updated: 2025/01/03 19:28:04 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	ft_is_digit(char *n)
{
	int	i = 0;
	while (n[i] != '\0')
	{	
		if(n[i] >= '0' && n[i] <= '9')
			return (1);
		i++;	
	}
	return (0);	
}

#include <stdio.h>
int	main(void)
{
	char	*tab[] = {"123", "456",0};
	int	(*f)(char *) = ft_is_digit;
	int 	result = ft_count_if(tab, f);
	printf("result: %d\n", result);
}*/
