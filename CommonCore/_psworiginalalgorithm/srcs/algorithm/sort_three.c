/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:24:56 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/29 11:23:07 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

static void	compare(t_node *f, t_node *s, t_node *t, t_stack **stack)
{
	if (f->index > s->index && f->index < t->index)
		do_sa(stack);
	else if (f->index > s->index && s->index > t->index)
	{
		do_sa(stack);
		do_rra(stack);
	}
	else if (f->index > s->index && s->index < t->index)
		do_ra(stack);
	else if (f->index < s->index && s->index > t->index
		&& f->index < t->index)
	{
		do_sa(stack);
		do_ra(stack);
	}
	else if (f->index < s->index && s->index > t->index)
		do_rra(stack);
}

void	sort_three(t_stack **stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if ((*stack)->size == 2)
	{
		do_sa(stack);
		return ;
	}
	first = (*stack)->node;
	second = first->next;
	third = second->next;
	if (is_unsorted(stack))
		compare(first, second, third, stack);
}
