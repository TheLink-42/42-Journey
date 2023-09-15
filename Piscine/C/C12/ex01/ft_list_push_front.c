/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:05:49 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 19:05:51 by jbaeza-c         ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = NULL;
	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->data = data;
	node->next = NULL;
	if (*begin_list)
		node->next = *begin_list;
	*begin_list = node;
}
