/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:56:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 23:22:14 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	sort_small(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->size <= 3)
		sort_three(stack_a);
	else
		sort_five(stack_a, stack_b);
}

void	sort_big(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_printf("Got in sort_big\n");
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (!is_sorted(stack_a))
		return ;
	else if ((*stack_a)->size <= SMALL_STACK)
		sort_small(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}

