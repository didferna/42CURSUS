/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:35:30 by didac             #+#    #+#             */
/*   Updated: 2025/02/07 17:41:13 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int	ft_unsigned(va_list args)
{
	int	chars;
	unsigned int c;

	chars = 0;
	c = va_arg(args, unsigned int);
	if (c == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (c >= 10)
		chars += ft_unsigned (c / 10);
	ft_putchar(c % 10 + '0');
	return (chars + 1);
}