/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:48:31 by didferna          #+#    #+#             */
/*   Updated: 2025/02/08 19:37:21 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MI_PRINTF_H
#define MI_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void	*content;
	struct s_list *next;
}t_list;

int     ft_mn_printf(const char *print , ...);
int     ft_delimitators(const char *print,va_list args);
int	ft_percent(void);
int	ft_char(va_list args);
int	ft_string(va_list args);
int	ft_unsigned(va_list args);
void    ft_putchar(const char c);

#endif
