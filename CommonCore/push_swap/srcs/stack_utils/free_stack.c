/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:42:24 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/28 12:28:17 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	free_stack(t_stack **stack)
{
	t_node	*node;

	if (!stack || !*stack)
		return ;
	while ((*stack)->node)
	{
		node = (*stack)->node->next;
		free((*stack)->node);
		(*stack)->node = node;
	}
	free(*stack);
}
