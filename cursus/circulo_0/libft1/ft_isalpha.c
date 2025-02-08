/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:04:34 by didac             #+#    #+#             */
/*   Updated: 2025/01/06 17:04:04 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || ((c >= 'a' && c <= 'z')))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
    int c = '|';
   int result = ft_isalpha(c);
    printf("result: %d\n",result);
    return (0);
}*/
