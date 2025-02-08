/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:03:18 by didferna          #+#    #+#             */
/*   Updated: 2025/01/25 17:07:56 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* split , es una funcion a partir de un divisor tiene 	que separar las palabras
 * i posicionarlas en diferentes arrays dentro de un mismo array.
 * De manera que comienzo contando las palabras que tengo , i alocando la memoria
 * necesaria para los siguientes punteros que tengo que almacenar.
 *Despues comienzo a recorer el string en el while i defino despues con un if
 *lo que hace la definicion de una palabra. i despues un while en cual si no
 es nulo o si no es c sigue corriendo , con lo que si es c va a ir a recorrer
 la palabra. i me crea la palabra me la laoja i sigue con el bucle .
 LO mas importante de eta funcion es que entienda bien la gestion de los if
 i crearlos bien.*/
#include "libft.h"

static char	**ft_count_words(char const *s, char c)
{
	int		i;
	int		words;
	char	**str_words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	str_words = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str_words)
		return (NULL);
	str_words[words] = NULL;
	return (str_words);
}

static void	ft_free_all(char **full)
{
	while (*full)
	{
		free(*full);
		full--;
	}
	free(full);
}

static char	*ft_createstr(char const *str, size_t start, size_t end)
{
	char	*new_str;
	size_t	i;
	size_t	k;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!new_str)
		return (NULL);
	k = start;
	while (i < (end - k))
	{
		new_str[i] = str[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}

static char	**ft_is_word(char const *s, char c, size_t end, char **full)
{
	size_t	run;
	size_t	start;

	start = 0;
	run = 0;
	while (s[run] != '\0')
	{
		if (s[run] != c && (run == 0 || s[run - 1] == c))
		{
			start = run;
			while (s[run] != '\0' && s[run] != c)
				run ++;
			end = run;
			*full = ft_createstr(s, start, end);
			if (!*full)
			{
				ft_free_all(full);
				return (NULL);
			}
			full++;
		}
		else
			run++;
	}
	return (full);
}

char	**ft_split(char const *s, char c)
{
	size_t	end;
	char	**full;
	char	**original_full;

	end = 0;
	if (!s)
		return (NULL);
	full = ft_count_words(s, c);
	if (!full)
		return (NULL);
	original_full = full;
	full = ft_is_word(s, c, end, full);
	return (original_full);
}
/*
int	main(void)
{
	char c = '\0';
	int i = 0;
	char const *s = "MESINTOTRITRE";
	char  **result =ft_split(s, c);
	//result[4] = NULL;
	while (result[i])
	{

		printf("%p\n", result[i]);
		printf("%s\n", result[i]);
		i++;
	}
	//ft_free_all(result);
	return (0);
}*/
