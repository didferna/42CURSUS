/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:19:10 by didac             #+#    #+#             */
/*   Updated: 2025/01/23 10:41:53 by didac            ###   ########.fr       */
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
	new -> content = (int*)content;
	new -> next = NULL;
	return (new);
}

t_list  *ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (NULL);
}

int	main(void)
{
	t_list *node1 = ft_new_node(10);
	t_list *node2 = ft_new_node(20);
	t_list *node3 = ft_new_node(30);

	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	t_list *new = ft_new_node(40);
	ft_lstadd_back(&node1, new);
	t_list *current = node1;
	while (current != NULL)
	{
		printf("%d -> ", (int*)(current -> content));
		current = current -> next;
	}
	printf("NULL");
	return (0);
}