/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:31:35 by didferna          #+#    #+#             */
/*   Updated: 2025/01/12 17:53:43 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char	ft_lowercase(unsigned int i,char c )
{
	if(c >= 'A' && c <= 'Z')
	      return (c + 32);
	return (c);	
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) *(ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const s[] = "ABCD";
	char *result = ft_strmapi(s,ft_lowercase);
	printf("deberian ser minus: %s \n",result);
	free(result);
	return (0);
}*/
