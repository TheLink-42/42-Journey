/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:43:52 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/26 19:16:20 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	sort_b(t_stack **stack)
{
	t_node		*node;
	int			cnt;
	static int	mid;

	node = (*stack)->node;
	cnt = 0;
	mid = (*stack)->size / 2;
	while (node->next)
	{
		if (node->index < node->next->index)
		{
			if (cnt <= mid)
				do_rb(stack);
			else
				do_rrb(stack);
		}
		node = node->next;
		cnt++;
	}
}

void	align_b(t_stack **stack_a, t_stack **stack_b)
{
	int	index;
	int	is_in_stack;
	int	up;
	int	down;

	if ((*stack_b)->node = NULL)
		return ;
	index = (*stack_a)->node->index;
	is_in_stack = 0;
	while (index > 0 && !is_in_stack)
		if (find_index(stack_b, --index))
			is_in_stack = 1;
	if (!is_in_stack)
		sort_b(stack_b);
	else
	{
		up = search_first(stack_b, index, index);
		down = search_last(stack_b, index, index);
		if (up <= down)
			while (up--)
				do_rb(stack_b);
		else
			while (down--)
				do_rb(stack_b);
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
		align_b(stack_a, stack_b);
		do_pb(stack_a, stack_b);
	}
}			
