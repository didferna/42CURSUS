/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:18:45 by didac             #+#    #+#             */
/*   Updated: 2024/12/14 18:30:20 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = (a / b);
    *mod = (a % b);

}
#include <stdio.h>
int     main(void)
{
    int     a = 670;
    int     b = 23;
    int     div = 0;
    int     mod = 0;
    ft_div_mod(a ,b ,&div ,&mod);
    printf("result: %d",div);
    printf("result: %d",mod);

}