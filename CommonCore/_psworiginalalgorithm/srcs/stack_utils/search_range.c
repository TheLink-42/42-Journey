/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 00:32:51 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/01 00:47:24 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	search_range(t_stack **stack, int max, int min)
{
	t_node	*node;

	node = (*stack)->node;
	while (node)
	{
		if (node->index <= max && node->index >= min)
			return (1);
		node = node->next;
	}
	return (0);
}
