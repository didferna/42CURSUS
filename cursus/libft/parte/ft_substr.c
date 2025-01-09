/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:10:28 by didac             #+#    #+#             */
/*   Updated: 2025/01/08 19:09:49 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	cpy = 0;
    i = start;
	j = 0;
	cpy = malloc(sizeof(char) * (len));
	if (!(cpy))
		return (NULL);
	while(i < start + len && (s[i] != '\0'))
	{
		cpy[j] = s[i];
		i++;
		j++;
	}
	return (cpy);
}

int	main(void)
{
	char const s[] = "HELLO MARIOOO";
	unsigned int start = 3;
	size_t	len = 10;
	printf("esto es:%s \n",s);
	char *result = ft_substr(s, start, len);
	printf("resultado es:%s \n", result);
	free(result);
	return (0);
}