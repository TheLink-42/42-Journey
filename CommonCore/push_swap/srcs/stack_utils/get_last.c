/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:43:07 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 19:04:09 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

t_node	*get_last(t_stack **stack)
{
	t_node	*node;

	node = (*stack)->node;
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
