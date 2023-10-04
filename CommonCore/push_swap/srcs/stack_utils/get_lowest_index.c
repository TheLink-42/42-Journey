/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 04:54:16 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 04:56:35 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	get_lowest_index(t_stack **stack)
{
	int		index;
	t_node	*node;

	index = 99999;
	node = (*stack)->node;
	while (node)
	{
		if (node->index < index)
			index = node->index;
		node = node->next;
	}
	return (index);
}
