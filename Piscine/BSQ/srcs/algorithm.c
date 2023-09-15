/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:20:48 by mbelmont          #+#    #+#             */
/*   Updated: 2023/08/30 11:27:50 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

int	algorithm(t_board *board)
{
	int	max;
	int	r;
	int	c;

	max = do_sides(board);
	r = board->rows - 2;
	while (r >= 0)
	{
		c = board->cols - 2;
		while (c >= 0)
		{
			if (board->board[r][c] == 1)
			{
				board->board[r][c] = 1 + min(board->board[r + 1][c],
						board->board[r][c + 1],
						board->board[r + 1][c + 1]);
				if (board->board[r][c] > max)
					max = board->board[r][c];
			}
			c--;
		}
		r--;
	}
	return (max);
}

int	do_sides(t_board *board)
{
	int	max;
	int	r;

	max = 0;
	r = 0;
	while (max == 0 && r < board->rows)
	{
		if (board->board[r][board->cols - 1] == 1)
			max = 1;
		r++;
	}
	r = 0;
	while (max == 0 && r < board->cols)
	{
		if (board->board[board->rows - 1][r] == 1)
			max = 1;
		r++;
	}
	return (max);
}

int	print_board(t_board *board, int max, int pos)
{
	int	flag;

	if (max == 0)
		return (ERROR);
	board->i = -1;
	flag = 0;
	while (pos / board->cols < board->rows && pos % board->cols < board->cols)
	{
		print_aux(board, &pos, max, &flag);
		if (pos++ % board->cols == (board->cols) - 1)
			ft_putchar('\n', 0);
	}
	return (0);
}

void	print_aux(t_board *board, int *pos, int max, int *flag)
{
	int	aux;

	if (board->board[*pos / board->cols][*pos % board->cols] == 0)
		ft_putchar(board->obstacle, 0);
	else if ((board->i > 0 && *pos % board->cols == board->i)
		|| (board->i == -1
			&& board->board[*pos / board->cols][*pos % board->cols] == max))
	{
		aux = 0;
		board->i = (*pos % board->cols);
		while (aux++ < max)
		{
			ft_putchar(board->full, 0);
			*pos = *pos + 1;
		}
		if (++*flag == max)
			board->i = -2;
		*pos = *pos - 1;
	}
	else
		ft_putchar(board->empty, 0);
}
