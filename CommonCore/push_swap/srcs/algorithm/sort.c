/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:56:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/28 15:34:17 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	sort_small_stack(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->size <= 3)
		sort_three(stack_a);
	else
		sort_five(stack_a, stack_b);
}

void	sort_big_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	up;
	int	down;

	i = (*stack_a)->size / 20;
	j = 3;
	while (i-- >= 0)
	{
		sort_range(stack_a, stack_b, j + 19, j);
		j += 20;
	}
	sort_three(stack_a);
	up = search_first(stack_b, (*stack_b)->size + 2, (*stack_b)->size + 2);
	down = search_last(stack_b, (*stack_b)->size + 2, (*stack_b)->size + 2);
	if (up <= down)
		while ((*stack_b)->node->index != (*stack_b)->size + 2)
			do_rb(stack_b);
	else
		while ((*stack_b)->node->index != (*stack_b)->size + 2)
			do_rrb(stack_b);
	while ((*stack_b)->node)
		do_pa(stack_a, stack_b);
	while (++i < 2)
		do_rra(stack_a);
/*	up = search_first(stack_a, 0, 0);
	down = search_first(stack_a, 0, 0);
	if (up <= down)
		while ((*stack_a)->node->index != 0)
			do_ra(stack_a);
	else
		while ((*stack_a)->node->index != 0)
			do_rra(stack_a);*/
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (!is_unsorted(stack_a))
		return ;
	else if ((*stack_a)->size <= SMALL_STACK)
		sort_small_stack(stack_a, stack_b);
	else
		sort_big_stack(stack_a, stack_b);
}
