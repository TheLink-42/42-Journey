/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:17:07 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 05:02:44 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
			void (*free_fct)(void *))
{
	t_list	*node;
	t_list	*aux;

	node = *begin_list;
	while (node && node->next)
	{
		if (!(*cmp)(list->next->data, data_ref))
		{
			aux = node->next;
			node->next = aux->next;
			(*free_fct)(aux->data);
			free(aux);
		}
	}
	node = *begin_list;
	if (!(*cmp)(node->data, data_ref))
	{
		*begin_list = node->next;
		(*free_fct)(node->data);
		free(node);
	}
}
