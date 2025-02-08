/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:37:47 by didferna          #+#    #+#             */
/*   Updated: 2025/01/14 17:07:01 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*cpy;
	size_t	k;

	start = 0;
	end = 0;
	k = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	cpy = malloc(sizeof(char) * (end - start) + 2);
	if (!cpy)
		return (NULL);
	while (k < (end - start + 1))
	{
		cpy[k] = s1[start + k];
		k++;
	}
	cpy[k] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char const s1[] = "  hola  ";
	char const set[] = " ";
	char	*result = ft_strtrim(s1, set);
	printf("espero que funcione:%s \n", result);
	free(result);
	return (0);
}*/
