/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunky.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 03:48:59 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 14:55:47 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	optimize_move(int *a, int *b, t_stack **stack_a, t_stack **stack_b)
{
	int	cost_a;
	int	cost_b;

	cost_a = *a;
	cost_b = *b;
	while (cost_a > 0 && cost_b > 0)
	{
		do_rr(stack_a, stack_b);
		cost_a--;
		cost_b--;
	}
	while (cost_a < 0 && cost_b < 0)
	{
		do_rrr(stack_a, stack_b);
		cost_a++;
		cost_b++;
	}
	*a = cost_a;
	*b = cost_b;
}

void	move_aux(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b)
{
	while (cost_a > 0)
	{
		do_ra(stack_a);
		cost_a--;
	}
	while (cost_a < 0)
	{
		do_rra(stack_a);
		cost_a++;
	}
	while (cost_b > 0)
	{
		do_rb(stack_b);
		cost_b--;
	}
	while (cost_b < 0)
	{
		do_rrb(stack_b);
		cost_b++;
	}
}

void	move(t_stack **stack_a, t_stack **stack_b, int index)
{
	int	cost_a;
	int	cost_b;

	cost_a = move_cost_a(stack_a, index);
	cost_b = move_cost_b(stack_b, index);
	if ((cost_a > 0 && cost_b > 0) || (cost_a < 0 && cost_b < 0))
		optimize_move(&cost_a, &cost_b, stack_a, stack_b);
	move_aux(stack_a, stack_b, cost_a, cost_b);
}

void	rmove(t_stack **stack_a, t_stack **stack_b)
{
	t_node	*node_a;
	t_node	*node_b;
	int		index;

	while ((*stack_b)->size)
	{
		node_a = (*stack_a)->node;
		node_b = (*stack_b)->node;
		index = node_b->index + 1;
		if (index > get_highest_index(stack_a))
			index = 0;
		while (!find_index(stack_a, index))
			index++;
		while (node_a->index != index)
		{
			do_rra(stack_a);
			node_a = (*stack_a)->node;
		}
		do_pa(stack_a, stack_b);
	}
}

void	solve(t_stack **stack_a, t_stack **stack_b)
{
	int	index;

	while ((*stack_a)->size > 3)
	{
		index = get_cheapest(stack_a, stack_b);
		move(stack_a, stack_b, index);
		do_pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	rmove(stack_a, stack_b);
}
