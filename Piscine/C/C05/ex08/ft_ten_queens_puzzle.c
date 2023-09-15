/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:04:05 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/22 16:26:58 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	check(int matrix[10], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos)
		if (matrix[i] == num || matrix[i] + i == num + pos
			|| matrix[i] - i == num - pos)
			return (1);
	return (0);
}

void	display_queens(int matrix[10])
{
	int	i;

	i = -1;
	while (++i < 10)
		write (1, &(char){matrix[i] + '0'}, 1);
	write (1, "\n", 1);
}

int	solve(int matrix[10], int pos, int *count)
{
	int	queen;

	if (pos == 10)
	{
		display_queens(matrix);
		*count = *count + 1;
		return (1);
	}
	queen = -1;
	while (++queen <= 9)
	{
		if (!check(matrix, pos, queen))
		{
			matrix[pos] = queen;
			solve(matrix, pos + 1, count);
		}
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	i;
	int	matrix[10];
	int	count;

	count = 0;
	i = -1;
	while (++i < 10)
			matrix[i] = 0;
	x = solve(matrix, 0, &count);
	return (count);
}
