/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:20:07 by didac             #+#    #+#             */
/*   Updated: 2025/01/01 17:53:55 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <string.h>
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    unsigned char	*d;
	unsigned char	*s;

    i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
    if (d > s)
	{
		while (i < len)
        	{
            	d[i] = s[i];
            	i++;
        	}
	}
	else //dest esta antes
	  	{
			i = len - 1
			while (i >= 0)
				{
					d[i] = s[i];
					i--;
				}   
    	}
    return (dst);
}