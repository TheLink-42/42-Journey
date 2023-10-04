/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:04:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 15:25:16 by jimmy            ###   ########.fr       */
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
	return (ERROR);
}

int	pre_exec(int argc, char **argv, t_stack **stack_a, t_stack **stack_b)
{
	char	**tab;

	if (argc < 2)
		return (1);
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		if (check_args(tab, 0))
			return (free_tab(tab));
		if (init_stack(stack_a, stack_b, tab, 0))
			return (free_tab(tab));
		free_tab(tab);
	}
	else
	{
		if (check_args(argv, 1))
			return (ERROR);
		if (init_stack(stack_a, stack_b, argv, 1))
			return (ERROR);
	}
	return (OK);
}

int	error(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a && !stack_b)
	{
		ft_putstr_fd("Error\n", 2);
		return (OK);
	}
	if (!stack_a)
		free_stack(stack_b);
	if (!stack_b)
		free_stack(stack_a);
	ft_putstr_fd("Error\n", 2);
	return (OK);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		exec;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a || !stack_b)
		return (error (&stack_a, &stack_b));
	exec = pre_exec(argc, argv, &stack_a, &stack_b);
	if (exec == ERROR)
		return (error(&stack_a, &stack_b));
	else if (exec)
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (OK);
	}
	sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (OK);
}
