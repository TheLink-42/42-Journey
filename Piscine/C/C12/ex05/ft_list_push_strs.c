/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:10:02 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 19:10:04 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;
	t_list	*prev;
	int		i;

	if (size <= 0)
		return (0);
	node = ft_create_elem(strs[0]);
	i = 0;
	while (++i < size)
	{
		prev = ft_create_elem(strs[i]);
		prev->next = node;
		node = prev;
	}
	return (node);
}
