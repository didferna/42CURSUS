/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:37:12 by didac             #+#    #+#             */
/*   Updated: 2025/01/22 11:01:42 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list;

t_list *ft_new_node(int content)
{
	t_list	*new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = (void*)(intptr_t)content;
	new -> next = NULL;
	return (new);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{   
	t_list	*current;

	if (*lst == NULL )
    {
    	*lst = new;
    	return;
	}
	current = *lst;
	while(current -> next != NULL)
		current = current -> next;
	current -> next = new;
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