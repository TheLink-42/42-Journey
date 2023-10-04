/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 03:15:23 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 14:59:34 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

static int	ft_cost(t_stack **stack, int index)
{
	t_node	*node;
	int		cnt;

	node = (*stack)->node;
	cnt = 0;
	while (node->index != index)
	{
		cnt++;
		node = node->next;
	}
	if (cnt <= (*stack)->size / 2)
		return (cnt);
	return (cnt - (*stack)->size);
}

static int	ft_cost_aux(t_stack **stack, int index)
{
	t_node	*node;
	int		is_in_stack;

	is_in_stack = 0;
	node = (*stack)->node;
	if (!node)
		return (0);
	while (!is_in_stack && index > 0)
	{
		index--;
		if (find_index(stack, index))
			is_in_stack++;
	}
	if (!is_in_stack)
		index = get_highest_index(stack);
	return (ft_cost(stack, index));
}

int	get_cost(t_stack **stack_a, t_stack **stack_b, int index)
{
	int	cost_a;
	int	cost_b;

	cost_a = ft_cost(stack_a, index);
	cost_b = ft_cost_aux(stack_b, index);
	if (cost_a < 0 && cost_b < 0)
	{
		if (cost_a < cost_b)
			return (cost_a - 1);
		return (cost_b - 1);
	}
	if (cost_a > 0 && cost_b > 0)
	{
		if (cost_a > cost_b)
			return (cost_a + 1);
		return (cost_b + 1);
	}
	if (cost_a < 0)
		return (cost_b - cost_a + 1);
	return (cost_a - cost_b + 1);
}

int	move_cost_a(t_stack **stack, int index)
{
	return (ft_cost(stack, index));
}

int	move_cost_b(t_stack **stack, int index)
{
	return (ft_cost_aux(stack, index));
}
