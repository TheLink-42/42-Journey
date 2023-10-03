/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:54:37 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/26 12:08:32 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	flag;

	flag = 0;
	if ((*stack_a)->size == 5)
		flag++;
	while ((*stack_a)->size > 3)
	{
		if (flag)
			while ((*stack_a)->node->index
				&& (*stack_a)->node->index != 1)
				do_ra(stack_a);
		else
			while ((*stack_a)->node->index)
				do_ra(stack_a);
		do_pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	if (!is_unsorted(stack_b))
		do_sb(stack_b);
	while ((*stack_b)->size)
		do_pa(stack_a, stack_b);
}
