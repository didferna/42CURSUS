/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:10:28 by didac             #+#    #+#             */
/*   Updated: 2025/01/30 17:02:45 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if ((size_t)ft_strlen(s) <= i)
		return (ft_strdup(""));
	if (len >= (ft_strlen(s) + i))
		len = ft_strlen(s + i);
	cpy = malloc(sizeof(char) * (len + 1));
	if (!(cpy))
		return (NULL);
	while (i < start + len && (s[i] != '\0'))
	{
		cpy[j] = s[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char const s[] = "HELLO MARIOOO";
	unsigned int start = 0;
	size_t	len = 42000;
	printf("esto es:%s \n",s);
	char *result = ft_substr(s, start, len);
	printf("resultado es:%s \n", result);
	free(result);
	return (0);
}*/
