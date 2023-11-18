/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:08:49 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/14 00:56:31 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/psw.h"

static void	print_result(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_b)->node || is_unsorted(stack_a))
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
}

static int	do_cmd(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strncmp(cmd, "sa\n", 3))
		do_sa(stack_a);
	else if (!ft_strncmp(cmd, "sb\n", 3))
		do_sb(stack_b);
	else if (!ft_strncmp(cmd, "ss\n", 3))
		do_ss(stack_a, stack_b);
	else if (!ft_strncmp(cmd, "pa\n", 3))
		do_pa(stack_a, stack_b);
	else if (!ft_strncmp(cmd, "pb\n", 3))
		do_pb(stack_a, stack_b);
	else if (!ft_strncmp(cmd, "ra\n", 3))
		do_ra(stack_a);
	else if (!ft_strncmp(cmd, "rb\n", 3))
		do_rb(stack_b);
	else if (!ft_strncmp(cmd, "rr\n", 3))
		do_rr(stack_a, stack_b);
	else if (!ft_strncmp(cmd, "rra\n", 4))
		do_rra(stack_a);
	else if (!ft_strncmp(cmd, "rrb\n", 4))
		do_rrb(stack_b);
	else if (!ft_strncmp(cmd, "rrr\n", 4))
		do_rrr(stack_a, stack_b);
	else
		return (-1);
	return (0);
}

static void	checker(t_stack **stack_a, t_stack **stack_b)
{
	char	*cmd;

	cmd = get_next_line(0);
	while (cmd)
	{
		if (do_cmd(cmd, stack_a, stack_b))
		{
			ft_putstr_fd("Error\n", 2);
			free (cmd);
			return ;
		}
		free(cmd);
		cmd = get_next_line(0);
	}
	free(cmd);
	print_result(stack_a, stack_b);
}

static int	pre_exec(int argc, char **argv, t_stack **stack_a,
	t_stack **stack_b)
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

int	main (int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		flag;

	if (argc < 2)
		return (0);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a || !stack_b)
		return (check_malloc(&stack_a, &stack_b));
	flag = pre_exec(argc, argv, &stack_a, &stack_b);
	if (flag)
		ft_putstr_fd("Error\n", 2);
	else
		checker(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}