/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:41 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/14 01:18:45 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

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

int	check_args(char **argv, int pos)
{
	int	i;
	int	j;

	i = pos - 1;
	while (argv[++i])
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (-1);
			j++;
		}
		if (check_int(argv[i]))
			return (-1);
	}
	return (0);
}

int	check_int(char *str)
{
	size_t	res;
	int		i;

	res = 0;
	i = -1;
	if (str[i + 1] != '-')
	{
		while (str[++i])
			res = (res * 10) + str[i] - 48;
		if (res > 2147483647)
			return (-1);
	}
	else
	{
		i++;
		while (str[++i])
			res = (res * 10) + str[i] - 48;
		if (res > 2147483648)
			return (-1);
	}
	return (0);
}

int	is_unsorted(t_stack **stack)
{
	t_node	*node;

	node = (*stack)->node;
	while (node->next)
	{
		if (node->index > node->next->index)
			return (1);
		node = node->next;
	}
	return (0);
}

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
