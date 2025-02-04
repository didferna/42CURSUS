/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:12:12 by didferna          #+#    #+#             */
/*   Updated: 2024/12/24 16:53:22 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*void ft_putnumber( int n)
{
	printf ("%d\n", n);
}

int	main(void)
{
	int	tab[] = {1,2,3};
	int	lenght = 3;
	void	(*f)(int) = ft_putnumber;
	ft_foreach (tab, lenght, f);
}*/
