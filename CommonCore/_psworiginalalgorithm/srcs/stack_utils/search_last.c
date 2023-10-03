/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:48:17 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/01 01:15:59 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	search_last(t_stack **stack, int index)
{
	t_node	*node;
	int		cnt;

	cnt = 1;
	node = get_last(stack);
	while (node)
	{
		if (node->index == index)
			return (cnt);
		node = node->prev;
		cnt++;
	}
	return (-1);
}
