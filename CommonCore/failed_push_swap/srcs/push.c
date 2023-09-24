/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:06:05 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 10:14:20 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*node;

	if (!*src)
		return ;
	node = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = node;
}

void	do_pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	do_pb(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_printf("pb\n");
}
