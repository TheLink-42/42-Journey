/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:18:40 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/27 23:24:06 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int		arg_num_check(int ac, char **av, t_node **head);
void	print_node(t_node **head);
char	*find_node(t_node **head, unsigned int key);
void	p_billion(unsigned int num, t_node **head);

void	free_mem(t_node **head)
{
	t_node	*next;
	t_node	*current;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}

int	num_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	t_node	*lista;
	char	*av;
	int		error;

	av = argv[1];
	if (argc == 3)
		av = argv[2];
	lista = NULL;
	error = arg_num_check(argc, argv, &lista);
	if (error == 1)
	{
		ft_putstr("Error.\n");
		return (0);
	}
	else if (error == 2)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	p_billion(ft_atoi(av), &lista);
	write (1, "\n", 1);
	free_mem(&lista);
	return (0);
}
