/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:12 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/22 09:46:20 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack *node;

	while (*stack)
	{
		node = (*stack)->next;
		free(*stack);
		*stack = node;
	}
}


int	start_algorithm(int ac, char **av, t_stack **a, t_stack **b)
{
	if (init_stack(a, av))
		return (-1);


}



int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack *b;

	a = NULL;
	b = NULL;
	if (check_args(argc, argv))
		return (error(a, b));
	if (start_algorithm(argc, argv, a, b))
		return (error(a, b));
	free_stack(&a);
	free_stack(&b);
	return (0);
}
