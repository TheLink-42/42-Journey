/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:24:28 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/01 01:33:02 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

static int	first_index(t_stack **stack, int max, int min, int *index)
{
	t_node	*node;
	int		cnt;

	cnt = 0;
	node = (*stack)->node;
	while (node)
	{
		if (node->index >= min && node->index <= max)
		{
			*index = node->index;
			return (cnt);
		}
		cnt++;
		node = node->next;
	}
	return (-1);
}

static int	last_index(t_stack **stack, int max, int min, int *index)
{
	t_node	*node;
	int		cnt;

	cnt = 1;
	node = get_last(stack);
	while (node)
	{
		if (node->index >= min && node->index <= max)
		{
			*index = node->index;
			return (cnt);
		}
		cnt++;
		node = node->prev;
	}
	return (-1);
}

int	get_index(t_stack **stack, int max, int min)
{
	int	top_index;
	int	bot_index;
	int	top_cost;
	int	bot_cost;

	top_index = -1;
	bot_index = -1;
	top_cost = first_index(stack, max, min, &top_index);
	bot_cost = last_index(stack, max, min, &bot_index);
	if (top_cost <= bot_cost)
		return (top_index);
	return (bot_index);
}
