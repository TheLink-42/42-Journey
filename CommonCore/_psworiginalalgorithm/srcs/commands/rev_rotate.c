/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:50:48 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 19:08:34 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

static void	rev_rotate(t_stack **stack)
{
	t_node	*node;
	t_node	*last;

	node = (*stack)->node;
	if (!node || !node->next)
		return ;
	last = get_last(stack);
	last->prev->next = NULL;
	last->prev = NULL;
	node->prev = last;
	last->next = node;
	(*stack)->node = last;
}

void	do_rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	ft_printf("rra\n");
}

void	do_rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	ft_printf("rrb\n");
}

void	do_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_printf("rrr\n");
}
