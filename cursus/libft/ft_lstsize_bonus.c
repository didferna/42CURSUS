/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:43:55 by didac             #+#    #+#             */
/*   Updated: 2025/01/21 20:13:47 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>
 #include <stdio.h>

typedef struct s_list
{
	void	*content;
	struct	s_list *next;
}t_list;

t_list	*ft_newnode(int content)
{
	t_list	*new_node;

	new_node = (t_list*)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node-> content = (void*)content;
	new_node->next = NULL;
	return (new_node);
}


int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst ->next;
		i++;
	}
	return (i);
}

int	main(void)
{
	t_list *lst = ft_newnode(26);
	t_list *node2 = ft_newnode(34);
	t_list *node3 = ft_newnode(65);
	lst -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	size_t result = ft_lstsize(lst);
	printf ("numero de nodos:%zu\n", result);
	return (0);
}