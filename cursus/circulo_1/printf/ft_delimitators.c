/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimitators.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 22:28:29 by didferna          #+#    #+#             */
/*   Updated: 2025/02/08 19:46:13 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_delimitators(const char *print,va_list args)
{
	int	chars;

	chars = 0;
	if (*print == 'c')
		chars = ft_char(args);
	else if (*print == 's')
		chars = ft_string(args);
	/*else if (*print == 'p')
		chars = ft_pointer(args);
	else if (*print == 'd')
		chars = ft_decimal(args);
	else if (*print == 'i')
		chars = ft_base_ten(args);*/
	else if (*print == 'u')
		chars = ft_unsigned(args);
	/*else if (*print == 'x')
		chars = ft_hex_bot(args);
	else if (*print == 'X')
		chars = ft_hex_top(args);*/
	else if (*print == '%')
		chars = ft_percent();
	return (chars);
}
