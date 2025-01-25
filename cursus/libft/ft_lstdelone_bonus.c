/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:57:22 by didac             #+#    #+#             */
/*   Updated: 2025/01/23 11:55:54 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list;

t_list *ft_create_node(int content)
{
	t_list *new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);

	int *value = (int*)malloc(sizeof(int));
    if (!value) 
	{
        free(new); 
        return NULL;
	}
	*value = content;
	new -> content = (void*)(intptr_t)content;
	new -> next = NULL;
	return (new);
}
void	del(void *content)
{
	free(content);
}
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst -> content);
	free (lst);
}
int	main(void)
{
	t_list *node1 = ft_create_node(24);
	t_list *node2 = ft_create_node(26);
	t_list *node3 = ft_create_node(42);
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	t_list *result = node1;
	ft_lstdelone(node2,del);
	while (result != NULL)
	{
		printf("%d ->", *(int*)(result -> content));
		result = result -> next;
	}
	printf("ultimo nodo:%d\n", (int)(intptr_t)result -> content);
	free(node1);
	free(node3);
	return (0);
}