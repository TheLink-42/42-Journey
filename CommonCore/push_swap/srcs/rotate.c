/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:29:53 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 10:34:48 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*node;

	if (!*stack || !(*stack)->next)
		return ;
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	ft_lstadd_back(stack, node);
}

void	do_ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	do_rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	do_rr(t_stac **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
