/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:42:24 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/27 16:04:36 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	free_stack(t_stack **stack)
{
	t_node	*node;
	t_node	*aux;

	if (!stack || !*stack)
		return ;
	node = (*stack)->node;
	while (node)
	{
		aux = node->next;
		free(node);
		node = aux;
	}
	free(stack);
}
