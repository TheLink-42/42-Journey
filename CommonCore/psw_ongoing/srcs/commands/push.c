/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:10:36 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 23:34:04 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_node	*node;

	node = (*src)->node;
	if (!node)
		return ;
	if (node && !node->next)
	{
		(*src)->node = NULL;
		add_front(dst, node);
	}
	else
	{
		node->next->prev = NULL;
		(*src)->node = node->next;
		node->next = NULL;
		add_front(dst, node);
	}
}

void	do_pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	(*stack_a)->size++;
	(*stack_b)->size--;
	ft_printf("pa\n");
}

void	do_pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	(*stack_a)->size--;
	(*stack_b)->size++;
	ft_printf("pb\n");
}
