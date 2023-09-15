/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:43:31 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/20 18:55:06 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_both(int matrix[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (matrix[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (matrix[pos / 4][i] == num)
			return (1);
	return (0);
}

int	check_up(int matrix[4][4], int pos, int *limits)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[i][pos % 4] > max)
			{
				max = matrix[i][pos % 4];
				count++;
			}
			i++;
		}
		if (limits[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_down(int matrix[4][4], int pos, int *limits)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[i][pos % 4] > max)
			{
				max = matrix[i][pos % 4];
				count++;
			}
			i--;
		}
		if (limits[4 + (pos % 4)] != count)
			return (1);
	}
	return (0);
}

int	check_right(int matrix[4][4], int pos, int *limits)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[pos / 4][i] > max)
			{
				max = matrix[pos / 4][i];
				count++;
			}
			i--;
		}
		if (limits[12 + (pos / 4)] != count)
			return (1);
	}
	return (0);
}

int	check_left(int matrix[4][4], int pos, int *limits)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[pos / 4][i] > max)
			{
				max = matrix[pos / 4][i];
				count++;
			}
			i++;
		}
		if (limits[8 + (pos / 4)] != count)
			return (1);
	}
	return (0);
}
