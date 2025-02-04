/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:48:31 by didferna          #+#    #+#             */
/*   Updated: 2025/02/04 14:35:33 by didferna         ###   ########.fr       */
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

int     ft_percent(va_list args);
int     ft_delimitators(const char *print,va_list args);

#endif
