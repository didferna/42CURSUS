/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:51:40 by didac             #+#    #+#             */
/*   Updated: 2025/02/07 17:41:10 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_string(va_list args)
{
	const char *c;
	int	i;

	i = 0;
	c = va_arg(args, const char*);
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	return (i);
}