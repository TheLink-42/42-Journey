/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:10:00 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/26 19:14:33 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	find_index(t_stack **stack, int index)
{
	t_node	*node;

	node = (*stack)->node;
	while (node)
	{
		if (node->index == index)
			return (1);
		node = node->next;
	}
	return (0);
}
