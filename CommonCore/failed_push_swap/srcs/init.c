/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:57:57 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 14:32:55 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

int	init_stack(t_stack **a, char **argv)
{
	if (!a)
		return (-1);
	if (fill_stack(a, argv))
		return (-1);
	return (0);
}

t_stack	*create_node(int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->keep_a = 0;
	node->next = NULL;
	return (node);
}

int	fill_stack(t_stack **a, char **argv)
{
	int		i;
	int		num;
	t_stack	*node;
	t_stack	*new;

	i = 0;
	while (argv[++i])
	{
		num = ft_atoi(argv[i]);
		node = *a;
		if (node && !node->next && node->value == num)
			return (-1);
		while (node->next)
		{
			if (node->value == num)
				return (-1);
			node = node->next;
		}
		new = create_node(num);
		if (!new)
			return (-1);
		node->next = new;
	}
	return (0);
}
