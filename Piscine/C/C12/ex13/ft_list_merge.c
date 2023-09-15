/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 05:04:34 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 05:41:38 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*node;

	node = *begin_list1;
	if (!node || !begin_list1)
		*begin_list1 = begin_list2;
	else
	{
		while (node->next)
			node = node->next;
		node->next = begin_list2;
	}
}
