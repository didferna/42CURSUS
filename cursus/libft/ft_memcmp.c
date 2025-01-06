/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:17:24 by didac             #+#    #+#             */
/*   Updated: 2024/12/28 21:56:54 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char *ss1;
    unsigned char *ss2;

    i = 0;
    ss1 = (unsigned char *) s1;
    ss2 = (unsigned char *) s2;
    if (n == 0 || ss1[0] == '\0' && ss2[0] == '\0')
        return (0);
    while (i < n)
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{   size_t n = 0;
    char s1[] = "aa";
    char s2[] = "bb";

    char result = ft_memcmp(s1, s2, n);
    printf("result:  %d\n",result);
    return (0);

}