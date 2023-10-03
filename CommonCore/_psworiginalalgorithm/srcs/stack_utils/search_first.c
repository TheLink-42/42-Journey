/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:34:21 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/01 01:15:42 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	search_first(t_stack **stack, int index)
{
	t_node	*node;
	int		cnt;

	cnt = 0;
	node = (*stack)->node;
	while (node)
	{
		if (node->index == index)
			return (cnt);
		cnt++;
		node = node->next;
	}
	return (-1);
}
