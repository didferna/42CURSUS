/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:55:23 by didac             #+#    #+#             */
/*   Updated: 2025/01/09 20:23:55 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	cpy = malloc(sizeof(char ) * (i + 1));
	if (!(cpy))
		return (NULL);
	while (s1[j] != '\0')
	{
		cpy[j] = s1[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
/*int	main(void)
{
	const char s1[] = "";
	printf("esto es s1:%s \n", s1);
	char	*result = ft_strdup(s1);
	printf("esto es cpy:%s \n",result);
	free(result);
	return (0);
}*/
