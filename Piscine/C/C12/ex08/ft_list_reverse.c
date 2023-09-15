/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:11:27 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 19:11:29 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push(t_list **begin_list, t_list *node)
{
	if (begin_list)
		node->next = *begin_list;
	*begin_list = node;
}
