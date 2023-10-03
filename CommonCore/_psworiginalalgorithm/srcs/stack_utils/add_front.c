/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:24:57 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 23:28:56 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	add_front(t_stack **stack, t_node *new_node)
{
	t_node	*node;

	node = (*stack)->node;
	if (node)
	{
		new_node->next = node;
		node->prev = new_node;
	}
	(*stack)->node = new_node;
}
