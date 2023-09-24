/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:43:07 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/23 18:41:47 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../psw.h"

t_node	*get_last(t_node **head)
{
	t_node	*node;

	node = *head;
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
