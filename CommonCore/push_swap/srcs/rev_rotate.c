/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:46:27 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 10:58:12 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

static void	rev_rotate(t_stack **stack)
{
	t_stack	*node;

	if (!*stack || !(*stack)->next)
		return ;
	node = *stack;
	while (node->next->next)
		node = node->next;
	node->next->next = *stack;
	*stack = node->next;
	node->next = NULL;
}

void	do_rra(t_stack **a)
{
	rev_rotate(a);
	ft_printf("rra\n");
}

void	do_rrb(t_stack **b)
{
	rev_rotate(b);
	ft_printf("rrb\n");
}

void	do_rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_printf("rrr\n");
}
