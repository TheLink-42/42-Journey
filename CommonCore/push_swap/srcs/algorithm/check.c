/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:41 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/25 21:43:43 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

int	check_args(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	if (check_numbers(argv))
		return (-1);
	return (0);
}

int	check_numbers(char **argv)
{
	int	i;
	int	j;

	i = 0;
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

int	is_sorted(t_stack **stack)
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
