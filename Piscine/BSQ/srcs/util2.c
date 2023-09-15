/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:42:21 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/29 18:22:22 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	read_line(int fd, char *buf, int read_extra)
{
	char	x;
	int		i;

	i = 0;
	while (read(fd, buf, 1) > 0 && *buf != '\n')
		buf++;
	*buf = '\0';
	while (read_extra == 1 && read(fd, &x, 1) > 0 && x != '\n')
		i++;
	return (i);
}

int	min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	free_board(t_board *board)
{
	int	n_row;

	n_row = 0;
	while (n_row < board->rows)
	{
		free(board->board[n_row]);
		n_row++;
	}
	free(board->board);
}

void	mem_board(t_board *board)
{
	int	i;

	i = -1;
	board->board = malloc(sizeof(int *) * board->rows);
	while (++i < board->rows)
		board->board[i] = malloc(sizeof(int) * board->cols);
}
