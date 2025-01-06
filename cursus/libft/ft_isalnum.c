/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:36:50 by didac             #+#    #+#             */
/*   Updated: 2024/12/28 22:44:47 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || \
    (c >= '0' && c <= '9'))
        return (1);
    return (0);
}
#include <stdio.h>
int main(void)
{
    int c = '5';
    int result = ft_isalnum(c);
    printf ("result: %d \n",result);
    return (0);
}