/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:06:03 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 17:01:33 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item, int (*cmp)(void *, void *))
{
	t_btree	*node;

	if (!root || !*root || !item)
	{

