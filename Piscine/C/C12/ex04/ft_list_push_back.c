/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:08:29 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 19:08:32 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*current;

	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->data = data;
	node->next = NULL;
	if (!*begin_list)
		*begin_list = node;
	else
	{
		current = *begin_list;
		while (current->next)
			current = current->next;
		current->next = node;
	}
}
