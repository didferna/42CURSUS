/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mn_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:40:16 by didferna          #+#    #+#             */
/*   Updated: 2025/02/08 19:55:30 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_mn_printf(const char *print , ...)
{
	va_list	args;
	va_start(args, print);
	int	num_of_chars;
	
	if (!print)
		return (-1);
	if (write(1, "", 0) == -1)
		return (-1);
	num_of_chars = 0;
	while (*print)
	{
		if (*print == '%')
		{
			print++;
			num_of_chars += ft_delimitators(print, args);
			/*if (ft_delimitators(print, args) == 0)
			{
				write(1, print, 1);
				print--;
			}*/
		}
		else
		{
			write(1, print, 1);
			num_of_chars++;
		}
		print++;
	}
	va_end(args);
	return (num_of_chars);
}
