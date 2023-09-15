/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:11:55 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 19:11:57 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_ft_list_foreach(t_lsit *begin_list, void (*f)(void *))
{
	t_list	*node;

	node = begin_list;
	while (node)
	{
		(*f)(node->data);
		node = node->next;
	}
}
