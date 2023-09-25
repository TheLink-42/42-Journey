/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:34:21 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 11:48:08 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	search_first(t_stack **stack, int max_index, int min_index)
{
	t_node	*node;
	int		cnt;

	cnt = 0;
	node = (*stack)->node;
	if (!node)
		return (-2);
	while (node)
	{
		if (node->index >= min_index && node->index <= max_index)
			return (cnt);
		cnt++;
		node = node->next;
	}
	return (-1);
}
