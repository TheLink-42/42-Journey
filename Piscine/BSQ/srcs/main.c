/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:47:38 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 18:30:32 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

void	read_sq(void)
{
	int		re;
	int		lines;
	int		fd;
	char	*buffer;

	fd = open(FILENAME, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	buffer = malloc(sizeof(char) * 1024);
	re = read(0, buffer, 1024);
	if (ft_atoi(buffer, &lines) == ERROR || set_symbols2(buffer[re - 3],
			buffer[re - 2], buffer[re - 1]))
	{
		ft_putstr("map error\n", 1);
		free(buffer);
		exit(1);
	}
	write(fd, buffer, re);
	while (lines > 0)
	{
		re = read(0, buffer, 1024);
		write(fd, buffer, re);
		lines--;
	}
	free(buffer);
	close(fd);
}

void	do_board(char *name)
{
	int		fd;
	t_board	*board;
	char	*buffer;

	board = malloc(sizeof(t_board));
	fd = open(name, O_RDONLY);
	buffer = malloc(128);
	board->cols = read_line(fd, buffer, 1);
	close(fd);
	if (check_line(buffer, &board->rows, board) != ERROR
		&& create_board(name, board) != ERROR)
	{
		if (print_board(board, algorithm(board), 0) == ERROR)
			ft_putstr("map error\n", 1);
		free_board(board);
	}
	else
		ft_putstr("map error\n", 1);
	free(buffer);
	free(board);
}

int	main(int na, char **args)
{
	int	i;

	i = 1;
	if (na > 1)
	{
		while (i < na)
			do_board(args[i++]);
	}
	else
	{
		read_sq();
		do_board(FILENAME);
	}
	return (0);
}
