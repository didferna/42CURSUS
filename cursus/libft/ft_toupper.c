/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:31:06 by didac             #+#    #+#             */
/*   Updated: 2024/12/30 20:48:23 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
         c = c - 32;
         return (c);
    }
    return c;
}
#include <stdio.h>
int main(void)
{
    int c = 'b';
    int result = ft_toupper(c);
    printf("result: %c \n", result);
    return (0);

}