/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:13:04 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/27 23:17:49 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_node(t_node **head)
{
	t_node	*node;

	node = *head;
	while (node != NULL)
	{
		printf("%d   %s\n", node->key, node->value);
		node = node->next;
	}
}

char	*find_node(t_node **head, unsigned int key)
{
	t_node	*actual;

	actual = *head;
	while (actual != NULL)
	{
		if (actual->key == key)
			return (actual->value);
		actual = actual->next;
	}
	ft_putstr("Error.\n");
	exit (1);
}

void	add_node(t_node **head, char *line)
{
	t_node	*new_node;
	t_node	*actual;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		exit (1);
	new_node->key = ft_atoi(line);
	new_node->value = (char *)malloc(sizeof(char) * (ft_strlen(line) + 1));
	custom_cpy(new_node->value, line);
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		actual = *head;
		while (actual->next)
			actual = actual->next;
		actual->next = new_node;
	}
}
