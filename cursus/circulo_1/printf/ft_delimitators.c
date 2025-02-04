/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimitators.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 22:28:29 by didferna          #+#    #+#             */
/*   Updated: 2025/02/04 14:32:13 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_delimitators(const char *print,va_list args)
{
	int	chars;
	chars = 0;
	if (*print == 'c')
		chars += ft_char(args);
	else if (*print == 's')
		chars += ft_string(args);
	else if (*print == 'p')
		chars += ft_pointer(args);
	else if (*print == 'd')
		chars += ft_decimal(args);
	else if (*print == 'i')
		chars += ft_base_ten(args);	
	else if (*print == 'u')
		chars += ft_unsigned(args);
	else if (*print == 'x')
		chars += ft_hex_bot(args);
	else if (*print == 'X')
		chars += ft_hex_top(args);
	else if (*print == '%')
		chars += ft_percent(args);
	return (chars);
}
/*
myfucnion *myRRy[9] = {ft_char, ft_string, etc};
char cmp[9] = "cspdiuxX%";
int i = 0;
while (i <= 9)
{
	if (cmp[i] == print)
		break ;
	++i;
}

myRRy[i](args, &noc);*/
