/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_five.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:56:07 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/23 13:44:08 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

static	int	check_index(t_stack **stack, unsigned int index)
{
	t_stack	*node;

	node = *stack;
	while (node)
	{
		if (node->index == index)
			return (1);
		node = node->next;
	}
	return (0);
}

void	organize_a(t_stack **a, int cost)
{
	if (cost < 0)
	{
		while (cost)
		{
			do_rra(a);
			cost++;
		}
	}
	else
	{
		while (cost)
		{
			do_ra(a);
			cost--;
		}
	}
}

void	resolve_five(t_stack **a, t_stack **b)
{
	unsigned int	size;
	int			cost;

	size = get_size(a);
	while (size-- > 3)
		do_pb(a, b);
	resolve_three(a);
	while (*b)
	{
		if ((*b)->index > get_max(a))
			cost = get_cost(a, get_min(a));
		else ()
			cost = get_cost(a, (*b)->index + 1);
		organize_a(a, cost);
		do_pa(a, b);
	}
	organize_a(a, get_cost(a, get_min(a)));
}
