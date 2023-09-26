/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:48:17 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/26 13:40:08 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	search_last(t_stack **stack, int min_index, int max_index)
{
	t_node	*node;
	int		cnt;

	cnt = 1;
	if (!(*stack)->node)
		return (-2);
	node = get_last(stack);
	while (node)
	{
		if (node->index <= max_index && node->index >= min_index)
			return (cnt);
		node = node->prev;
		cnt--;
	}
	return (-1);
}
