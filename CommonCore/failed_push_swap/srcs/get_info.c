/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:48:46 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/24 11:59:04 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

unsigned int	get_max(t_stack **stack)
{
	unsigned int	res;
	t_stack		*node;

	res = 0;
	node = *stack;
	while (node)
	{
		if (node->index > res)
			res = node->index;
		node = node->next;
	}
	return (res);
}

unsigned int	get_min(t_stack **stack)
{
	unsigned int	res;
	t_stack		*node;

	res = 4294967295;
	node = *stack;
	while (node)
	{
		if (node->index < res)
			res = node->index;
		node = node->next;
	}
	return (res);
}

unsigned int	get_size(t_stack **stack)
{
	t_stack		*node;
	unsigned int	size;

	node = *stack;
	size = 0;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}

int	get_cost(t_stack **stack, unsigned int index, int *cost)
{
	t_stack		*node;
	unsigned int	size;
	int			value;

	value = 0;
	node = *stack;
	size = get_size(stack);
	while (node && node->index != index)
	{
		node = node->next;
		value++;
	}
	if (size / 2 >= value)
	{
		*cost = value;
		return (1);
	else
	{
		*cost = size - value;
		return (0);
	}
}

int	get_closer(t_stack **stack, unsigned int min, unsigned int max, int *up_down)
{
	int	cost_min;
	int	cost_max;
	int	up_down_min;
	int	up_down_max;

	up_down_min = get_cost(stack, min, &cost_min);
	up_down_min = get_cost(stack, max, &cost_max);
	if (cost_max <= cost_min)
	{

