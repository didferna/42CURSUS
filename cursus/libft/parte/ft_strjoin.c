/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:17:49 by didac             #+#    #+#             */
/*   Updated: 2025/01/09 14:10:35 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	i = 0;
	j = 0;
	cpy = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!cpy || !s1 || !s2)
		return(NULL);
	while (s1[i] != '\0')
	{	
		cpy[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cpy[i] = s2[j];
		j++;
		i++;
	}
	return (cpy);
}

int main(void)
{
	char const	s1[] = "hola ";
	char const	s2[] = "mundo";
	char	*result =ft_strjoin(s1, s2);
	printf("concatenacion:%s \n", result);
	free(result);
	return (0);
}