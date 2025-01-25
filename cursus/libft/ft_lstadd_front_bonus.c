/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:40:34 by didac             #+#    #+#             */
/*   Updated: 2025/01/19 18:15:28 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list *next;
}t_list;

t_list *new_node(void *content)
{
	t_list	*new_node;

	new_node = (t_list*)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	new -> next = *lst;
	*lst = new;
}

int	main(void)
{	
	t_list	*head = new_node((void*)42);
	t_list	*new_node = new_node((void*)24);

	ft_lstadd_front(&head, new_node);
	t_list *init = head;
	while (init != NULL)
	{
		printf("%d ->", init -> content);
		init = init -> next;
	}
	return (0);
}