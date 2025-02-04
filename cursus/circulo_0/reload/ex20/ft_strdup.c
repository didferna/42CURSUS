/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:03:45 by didferna          #+#    #+#             */
/*   Updated: 2024/12/24 12:43:29 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copi;

	i = 0;
	copi = malloc(sizeof(char) * ft_len(src) + 1);
	if (copi == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copi[i] = src[i];
		i++;
	}
	copi[i] = '\0';
	return (copi);
}

/*int	main(void)
{
	char	*src = "aasdasldhasbc";
	char	*result = ft_strdup(src);
	printf ("result: %s\n",result);
	free (result);
	return(0);
}*/
