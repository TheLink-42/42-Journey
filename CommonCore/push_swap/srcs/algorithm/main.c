/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:04:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/05 02:09:34 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"
/*
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
*/
int	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (-1);
}

int	pre_exec(int argc, char **argv, t_stack **stack_a, t_stack **stack_b)
{
	char	**tab;

	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		if (!tab[0])
			return (free_tab(tab));
		if (check_args(tab, 0))
			return (free_tab(tab));
		if (init_stack(stack_a, stack_b, tab, 0))
			return (free_tab(tab));
		free_tab(tab);
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

int	check_malloc(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a && !stack_b)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
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
	int		exec;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a || !stack_b)
		return (check_malloc(&stack_a, &stack_b));
	if (argc > 1)
	{
		exec = pre_exec(argc, argv, &stack_a, &stack_b);
		if (exec == -1)
			ft_putstr_fd("Error\n", 2);
		else if (!exec)
			sort(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
