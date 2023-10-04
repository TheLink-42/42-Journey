/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 03:58:25 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 14:23:36 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	get_cheapest(t_stack **stack_a, t_stack **stack_b)
{
	int		cheapest;
	int		index;
	int		cost;
	t_node	*node;

	node = (*stack_a)->node;
	index = 0;
	cheapest = 99999999;
	while (node)
	{
		cost = get_cost(stack_a, stack_b, node->index);
		if (cost < 0)
			cost *= -1;
		if (cost < cheapest)
		{
			index = node->index;
			cheapest = cost;
		}
		node = node->next;
	}
	return (index);
}
