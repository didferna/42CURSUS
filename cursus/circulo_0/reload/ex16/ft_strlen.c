/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:00:38 by didac             #+#    #+#             */
/*   Updated: 2024/12/18 14:35:13 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	result = i;
	return (result);
}

/*int     main(void)
{
    char    str[] = "12345";
    int     maxlen = 17;
    int     result = ft_strlen(str);
    if (result > maxlen)
        result = maxlen;
    printf("resultat: %d",result);
    return(0);    
}*/
