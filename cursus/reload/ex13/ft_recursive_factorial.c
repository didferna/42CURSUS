/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:00:06 by didac             #+#    #+#             */
/*   Updated: 2024/12/14 20:15:34 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return(0);
    if (nb == 0)
        return(1);
    return nb * ft_recursive_factorial(nb -1);        
}
#include <stdio.h>
int     main(void)
{
    int     nb = 6;
    int     result = ft_recursive_factorial(nb);
    printf("resultat: %d \n", result);
    return(0);
}