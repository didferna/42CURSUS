/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:28:17 by didac             #+#    #+#             */
/*   Updated: 2024/12/28 22:34:36 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);    
}

#include <stdio.h>
int main(void)
{
    int c = 'a';
    int result = ft_isdigit(c);
    printf ("result: %d \n",result);
    return (0);
}