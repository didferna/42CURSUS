/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:36:50 by didac             #+#    #+#             */
/*   Updated: 2025/01/25 23:23:22 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || \
	(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    int c = '5';
    int result = ft_isalnum(c);
    printf ("result: %d \n",result);
    return (0);
}*/
