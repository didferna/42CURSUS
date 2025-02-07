/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mn_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:40:16 by didferna          #+#    #+#             */
/*   Updated: 2025/02/07 17:40:59 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			if (*print != ft_delimitators)
			{
				num_of_chars = -1;
				return  (num_of_chars);
			}
		}
		else
		{
			ft_putchar(print);
			num_of_chars++;
		}
		print++;
	}
	va_end(args);
	return (num_of_chars);
}
