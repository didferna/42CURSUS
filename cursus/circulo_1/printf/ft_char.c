/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:36:40 by didferna          #+#    #+#             */
/*   Updated: 2025/02/04 14:48:17 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_char(va_list args)
{
	char	c;

	c = (char)va_arg(args,int);
	write(1, &c,1);
	return (1);
}
