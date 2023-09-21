/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:18:02 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 10:26:11 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*node;

	if (!*stack || !(*stack)->next)
		return ;
	node = *stack;
	*stack = (*stack)->next;
	node->next = (*stack->next);
	(*stack)->next = node;
	
}

void	do_sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	do_sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	do_ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
