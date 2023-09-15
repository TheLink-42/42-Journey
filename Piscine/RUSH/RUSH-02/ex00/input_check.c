/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:21:43 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/27 23:16:46 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	add_node(t_node **head, char *line);

int	r_line(int fd, char *buff)
{
	int	total;

	total = 0;
	while (read(fd, buff, 1) && *buff != '\n')
	{
		buff++;
		total++;
	}
	*buff = '\0';
	return (total);
}

int	check_def(char *line)
{
	int	c;

	c = 0;
	while (*line == 32)
		line++;
	while (*line >= '0' && *line <= '9')
	{
		c = 1;
		line++;
	}
	if (*line == ':' && c == 1)
	{
		c++;
		line++;
	}
	while (*line == 32)
		line++;
	while ((*line >= 32 && *line <= 126) && (c == 2 || c == 3))
	{
		c = 3;
		line++;
	}
	if (*line == '\0' && c == 3)
		return (0);
	return (1);
}

int	check_format(int fd, t_node **head)
{
	char	*buff;

	buff = (char *)malloc(sizeof(char) * 128);
	while (r_line(fd, buff) > 0)
	{
		if (check_def(buff))
			return (1);
		add_node(head, buff);
	}
	free(buff);
	return (0);
}

int	check_dic(char *dic, t_node **head)
{
	int		fd;

	fd = open(dic, O_RDONLY);
	if (fd == -1)
		return (1);
	if (check_format(fd, head))
		return (1);
	close(fd);
	return (0);
}

int	arg_num_check(int ac, char **av, t_node **head)
{
	if (ac < 2 || ac > 3)
		return (1);
	if (ac == 2)
	{
		while (*av[1])
		{
			if (*av[1] < '0' || *av[1] > '9')
				return (1);
			av[1]++;
		}
		if (check_dic("./numbers.dict", head))
			return (2);
	}
	if (ac == 3)
	{
		while (*av[2])
		{
			if (*av[2] < '0' || *av[2] > '9')
				return (1);
			av[2]++;
		}
		if (check_dic(av[1], head))
			return (2);
	}
	return (0);
}
