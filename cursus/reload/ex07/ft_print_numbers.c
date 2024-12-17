/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:11:45 by didac             #+#    #+#             */
/*   Updated: 2024/12/13 19:26:11 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_print_numbers(void)
{
    int     i;
    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}

int     main(void)
{
    ft_print_numbers();
    return(0);
}