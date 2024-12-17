/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:43:48 by didac             #+#    #+#             */
/*   Updated: 2024/12/13 10:52:41 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_print_alphabet(void)
{
    int     i;
    i = 'a';

    while(i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}

int     main(void)
{
    ft_print_alphabet();
    return(0);
}