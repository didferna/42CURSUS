/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:36:28 by didac             #+#    #+#             */
/*   Updated: 2024/12/14 19:56:15 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_factorial(int nb)
{
    int     i;
    int     result;
    i = 1;
    result = 1;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return(1);    
    while(i <= nb)
    {
        result = result * i;
        i++;
    }
    return (result);
}

#include <stdio.h>
int     main(void)
{
    int     nb = 9;
    int     result = ft_iterative_factorial(nb);
    printf("result: %d \n", result);
    return(0);
}