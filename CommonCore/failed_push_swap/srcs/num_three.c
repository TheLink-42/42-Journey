/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_three.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:22:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/23 16:11:50 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

static void	solve_three(t_stack **stack)
{
	int	max;
	int	min;

	max = get_max(a);
	min = get_min(a);
	if ((*a)->index == max)
	{
		do_ra(a);
		if ((*a)->next->index == min)
			do_sa(a);
	}
	else if ((*a)->index != min)
	{
		if ((*a)->next->index == min)
			do_sa(a);
		else
			do_rra(a);
	}
	else if ((*a)->next->index == max)
	{
			do_rra(a);
			do_sa(a);
	}
}
