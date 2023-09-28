/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:04:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/28 12:23:26 by jimmy            ###   ########.fr       */
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

int	pre_exec(int argc, char **argv, t_stack **stack_a, t_stack **stack_b)
{
	char	**tab;

	if (argc < 2)
		return (-1);
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		if (check_args(tab, 0))
			return (-1);
		if (init_stack(stack_a, stack_b, tab, 0))
			return (-1);
	}
	else
	{
		if (check_args(argv, 1))
			return (-1);
		if (init_stack(stack_a, stack_b, argv, 1))
			return (-1);
	}
	return (0);
}

int	error(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a && !stack_b)
		return (0);
	if (!stack_a)
		free_stack(stack_b);
	if (!stack_b)
		free_stack(stack_a);
	ft_putstr_fd("Error\n", 2);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a || !stack_b)
		return (error (&stack_a, &stack_b));
	if (pre_exec(argc, argv, &stack_a, &stack_b))
		return (error(&stack_a, &stack_b));
//	print_nodes_index(&a);	
//	ft_printf("\n");
	sort(&stack_a, &stack_b);
//	ft_printf("\n");
//	print_nodes_index(&a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
