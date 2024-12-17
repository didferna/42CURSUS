/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:28:43 by didac             #+#    #+#             */
/*   Updated: 2024/12/15 17:34:12 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_sqrt(int nb)
{
    int     i;
    i = 0;
    if (nb < 0)
        return(0);
    while( i * i <= nb)
    {
        if (i * i == nb)
            return(i);
        i++;
    }
    return(0);
}
#include <stdio.h>
int     main(void)
{
    int     nb = 26;
    int     result = ft_sqrt(nb);
    printf("resultat: %d",result);
}