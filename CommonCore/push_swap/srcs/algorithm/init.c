/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:13 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 04:45:46 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	init_stack(t_stack **stack_a, t_stack **stack_b, char **argv, int pos)
{
	(*stack_a)->node = NULL;
	(*stack_a)->size = 0;
	(*stack_b)->node = NULL;
	(*stack_b)->node = 0;
	if (fill_stack(stack_a, argv, pos))
		return (-1);
	fill_index(stack_a, 0, -2147483648);
	return (0);
}

int	fill_stack(t_stack **stack, char **argv, int pos)
{
	t_node	*node;
	int		value;
	int		i;

	i = pos;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		node = new_node(value);
		if (!node)
			return (-1);
		if (add_back(stack, node))
			return (-1);
		i++;
	}
	return (0);
}

void	fill_index(t_stack **stack, int index, int value)
{
	t_node	*node;
	int		min;

	min = 2147483647;
	node = (*stack)->node;
	while (node)
	{
		if (node->value == value)
		{
			node->index = index;
			index++;
		}
		if (node->index < 0 && node->value < min)
			min = node->value;
		node = node->next;
	}
	if (index != (*stack)->size)
		fill_index(stack, index, min);
}
