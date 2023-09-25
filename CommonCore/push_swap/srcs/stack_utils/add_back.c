/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:19:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 19:03:42 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	add_back(t_stack **stack, t_node *new_node)
{
	t_node	*node;

	node = (*stack)->node;
	if (!node)
	{
		(*stack)->node = new_node;
		(*stack)->size++;
		return (0);
	}
	if (node && !node->next && node->value == new_node->value)
		return (-1);
	while (node && node->next)
	{
		if (node->value == new_node->value)
			return (-1);
		node = node->next;
	}
	new_node->prev = node;
	node->next = new_node;
	(*stack)->size++;
	return (0);
}
