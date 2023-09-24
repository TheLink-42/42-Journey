/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_hundred.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:44:17 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/23 14:29:39 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

void	sort_hundred(t_stack **a, t_stack **b)
{
	unsigned int	top_index;
	unsigned int	bot_index;
	int			cost;
	int			up_down;

	top_index = get_size(a) - 1;
	low_index = 0;
	while (*a)
