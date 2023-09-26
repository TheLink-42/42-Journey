/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jimmy_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:43:52 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/26 14:17:42 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	align_b(t_stack **stack_a, t_stack **stack_b)
{
	int	index;



void	sort_range(t_stack **stack_a, t_stack **stack_b, int max, int min)
{
	int	up;
	int	down;
	int	i;

	while (search_first(stack_a, max, min) > -1)
	{
		i = 0;
		up = search_first(stack_a, max, min);
		down = search_last(stack_a, max, min);
		if (up <= down)
			while (i++ < up)
				do_ra(stack_a);
		else
			while (i++ < down)
				do_rra(stack_a);
		align_b(stack_a, stack_b);
		do_pb(stack_a, stack_b);
	}
}			
