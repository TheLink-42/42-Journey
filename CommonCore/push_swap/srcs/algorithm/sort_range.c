/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:43:52 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/28 19:52:02 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	sort_b(t_stack **stack)
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

void	sort_range(t_stack **stack_a, t_stack **stack_b, int max, int min)
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
