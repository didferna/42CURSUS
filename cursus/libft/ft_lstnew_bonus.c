/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:37:14 by didac             #+#    #+#             */
/*   Updated: 2025/01/21 15:05:31 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void	content;
	struct	s_list *next;
	
}t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = (t_list*)malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	first -> content = content;
	first -> next = NULL;
	return (first);

}

int	main(void)
{
	int	valor = 42;
	t_list	*nodo = (ft_lstnew(&valor));
	printf("contenido nodo:%d\n", *(int*)nodo -> content);
	printf("contenido siguiente:%p\n", (void*)nodo -> next);
	free (nodo);
	return (0);
}