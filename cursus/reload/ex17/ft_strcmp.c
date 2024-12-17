/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:47:23 by didac             #+#    #+#             */
/*   Updated: 2024/12/15 19:45:47 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2)
{
    int     i;
    int     result;
    i = 0;
    result = 0;
    while((s1[i] != '\0') || (s2[i] != '\0'))
    {
        if (s1[i] == s2[i])
            i++;
        else
        {   result = s1[i] - s2[i];    
            return (result);
        }
    }
   
    return (result);

}

#include <stdio.h>
int     main(void)
{
    char    s1[] = "ab";
    char    s2[] = "abc";
    int     result = ft_strcmp(s1, s2);
    printf("resultado: %d \n",result);
    return(0);
}