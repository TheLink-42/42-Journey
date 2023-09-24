/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:01:31 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/24 13:12:19 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes.psw.h"

static void	swap(t_stack **stack)
{
	t_node *node;
	t_node *aux;

	node = (*stack)->node;
	if (!node || !node->next)
		return ;
	aux = node->next;
	node->next = aux->next;
	aux->next->prev = node;
	aux->next = node;
	node->prev = aux;
	aux->prev = NULL;
	(*stack)->node = aux;
}

void	do_sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	do_sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	do_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
