/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:43:52 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/01 01:53:51 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

/*void	sort_b(t_stack **stack)
{
	t_node	*node;
	int	cnt;

	cnt = 0;
	node = (*stack)->node;
	while (node->next)
	{
		if (node->index < node->next->index)
		{
			if (cnt <= (*stack)->size)
				do_rb(stack);
			else
				do_rrb(stack);
			node = (*stack)->node;
			cnt = 0;
		}
		else
			node = node->next;
		cnt++;
	}
}

void	align_b(t_stack **stack_b, int	index)
{
	int		is_in_stack;
	t_node	*node;

	is_in_stack = 0;
	node = (*stack_b)->node;
	if (!node)
		return ;
	while (!is_in_stack && index > 0)
	{
		index--;
		if (find_index(stack_b, index))
			is_in_stack = 1;
	}
	if (!is_in_stack)
		sort_b(stack_b);
	else
	{
		while (node->index != index)
		{
			if (search_first(stack_b, index, index) <= search_last(stack_b, index, index))
				do_rb(stack_b);
			else
				do_rrb(stack_b);
			node = (*stack_b)->node;
		}
	}
}

vioid	sort_range(t_stack **stack_a, t_stack **stack_b, int max, int min)
{
	int	up;
	int	down;
	int	i;

	while (search_first(stack_a, max, min) >= 0)
	{
		i = 0;
		up = search_first(stack_a, max, min);
		down = search_last(stack_a, max, min);
		if (up <= down)
			while (i++ < up)
				do_ra(stack_a);
		else
			while (i++ < down)
				do_rra(stack_a);
		align_b(stack_b, (*stack_a)->node->index);
		do_pb(stack_a, stack_b);
	}
}

*/
//
//
//
//
//
//

int	cost_to_sort_b(t_stack **stack)
{
	t_node	*node;

	node = (*stack)->node;
	while (node->next)
	{
		if (node->index < node->next->index)
			return (get_cost(stack, node->next->index));
		node = node->next;
	}
	return (0);
}

void	align_both(t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_a)->cost > 0 && (*stack_b)->cost > 0)
	{
		do_rr(stack_a, stack_b);
		(*stack_a)->cost--;
		(*stack_b)->cost--;
	}
	while ((*stack_a)->cost < 0 && (*stack_b)->cost < 0)
	{
		do_rrr(stack_a, stack_b);
		(*stack_a)->cost++;
		(*stack_b)->cost++;
	}
}

void	align_stacks(t_stack **stack_a, t_stack **stack_b)
{
	if (((*stack_a)->cost < 0 && (*stack_b)->cost < 0)
		|| ((*stack_a)->cost > 0 && (*stack_b)->cost > 0))
		align_both(stack_a, stack_b);
	while ((*stack_a)->cost > 0)
	{
		do_ra(stack_a);
		(*stack_a)->cost--;
	}
	while ((*stack_a)->cost < 0)
	{
		do_rra(stack_a);
		(*stack_a)->cost++;
	}
	while ((*stack_b)->cost > 0)
	{
		do_rb(stack_b);
		(*stack_b)->cost--;
	}
	while ((*stack_b)->cost < 0)
	{
		do_rrb(stack_b);
		(*stack_b)->cost++;
	}
}

int	get_cost(t_stack **stack, int index)
{
	int	start;
	int	end;

	start = search_first(stack, index);
	end = search_last(stack, index);
	if (start <= end)
		return (start);
	else
		return (-end);
}

int	get_cost_b(t_stack **stack, int index)
{
	t_node	*node;
	int		is_in_stack;

	node = (*stack)->node;
	is_in_stack = 0;
	if (!node)
		return (0);
	while (!is_in_stack && index > 0)
	{
		index--;
		if (find_index(stack, index))
				is_in_stack++;
	}
	if (!is_in_stack)
		return (cost_to_sort_b(stack));
	return (get_cost(stack, index));
}

void	sort_range(t_stack **stack_a, t_stack **stack_b, int max, int min)
{
	int	index;

	while (search_range(stack_a, max, min))
	{
		index = get_index(stack_a, max, min);
		(*stack_a)->cost = get_cost(stack_a, index);
		(*stack_b)->cost = get_cost_b(stack_b, index);
		align_stacks(stack_a, stack_b);
		do_pb(stack_a, stack_b);
	}
}
