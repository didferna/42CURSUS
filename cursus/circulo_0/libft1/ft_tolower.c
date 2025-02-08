/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:54:47 by didac             #+#    #+#             */
/*   Updated: 2025/01/25 23:18:45 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c +32;
		return (c);
	}
	return (c);
}

/*#include <stdio.h>
int main(void)
{
    int c = 'B';
    int result = ft_tolower(c);
    printf("result: %c \n", result);
    return (0);
}*/
