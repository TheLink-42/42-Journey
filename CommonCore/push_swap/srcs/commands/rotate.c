/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:19:19 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/24 19:10:25 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

static void	rotate(t_stack **stack)
{
	t_node	*node;
	t_node	*last;

	node = (*stack)->node;
	if (!node || !node->next)
		return ;
	(*stack)->node = node->next;
	node->next->prev = NULL;
	last = get_last(&node);
	last->next = node;
	node->next = NULL;
	node->prev = last;
}

void	do_ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	do_rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	do_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
