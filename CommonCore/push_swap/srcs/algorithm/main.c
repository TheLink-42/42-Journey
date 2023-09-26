/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:04:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/26 13:29:21 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

void	print_nodes_index(t_stack **stack)
{
	t_node	*node;

	node = (*stack)->node;
	while (node)
	{
		ft_printf("%d\n", node->index);
		node = node->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = (t_stack *)malloc(sizeof(t_stack));
	b = (t_stack *)malloc(sizeof(t_stack));
	if (check_args(argc, argv))
		return (0);
	if (init_stack(&a, &b, argv))
		return (0);
	print_nodes_index(&a);
	ft_printf("\n");
	sort(&a, &b);
	ft_printf("\n");
	print_nodes_index(&a);
	return (0);
}
