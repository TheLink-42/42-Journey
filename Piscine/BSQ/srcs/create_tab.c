/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:22:30 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/29 18:46:44 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	fill_board(t_board *board, char *buffer, int fd)
{
	int	ncols;
	int	nrows;

	ncols = 0;
	nrows = 0;
	while (read(fd, buffer, 1) > 0 && nrows < board->rows)
	{
		ncols++;
		if (*buffer == '\n')
		{
			nrows++;
			if (check_col(board->cols, ncols) == ERROR)
				return (ERROR);
			ncols = 0;
		}
		else if (*buffer == board->obstacle)
			board->board[nrows][ncols - 1] = 0;
		else if (*buffer == board->empty)
			board->board[nrows][ncols - 1] = 1;
		else
			return (ERROR);
	}
	if (nrows < board->rows)
		return (ERROR);
	return (0);
}

int	create_board(char *file, t_board *board)
{
	int		fd;
	char	*buffer;

	mem_board(board);
	fd = open(file, O_RDONLY);
	buffer = (char *)malloc(sizeof(char) * 128);
	read_line(fd, buffer, 0);
	free(buffer);
	buffer = (char *)malloc(sizeof(char));
	if (fill_board(board, buffer, fd) == ERROR)
		return (ERROR);
	close(fd);
	free(buffer);
	return (0);
}
