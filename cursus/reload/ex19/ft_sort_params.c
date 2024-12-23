/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:49:55 by didac             #+#    #+#             */
/*   Updated: 2024/12/22 20:03:26 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/
void	ft_write(char *argv)
{
	int	i;
	i = 0;
	while (argv[i] != '\0')
	{	
		ft_putchar(argv[i]);
		i++;
	}
}
void	ft_swap (char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
int str_compare(char *s1,char  *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	
		if (s1[i] < s2[i])
			return (-1);
		
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc,	char **argv)
{
	int	i;
	int flag;
	int	result;

	i = 1;
	flag = 1; 
	while( flag == 1)
	{
		flag = 0;
		i = 1;
		while (i < argc -1)
		{
			result = str_compare(argv[i], argv[i + 1]);
			if (result == 1)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				flag = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		
		ft_write(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return(0);
}