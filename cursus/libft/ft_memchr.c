/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:12:20 by didac             #+#    #+#             */
/*   Updated: 2024/12/26 18:43:15 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *str;
    unsigned char   cc;

    i = 0;
    str = (unsigned char *) s;
    cc = (unsigned char ) c;
    while (i < n)
    {
        if (cc == str[i])
            return (void *)(str + i);
        i++;
    }
    return (NULL);
}