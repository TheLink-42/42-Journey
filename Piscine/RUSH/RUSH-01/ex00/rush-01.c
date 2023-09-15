/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:42:49 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/20 18:55:04 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_both(int matrix[4][4], int pos, int num);
int		check_all(int matrix[4][4], int pos, int *limits);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check(int argc, char **argv);
int		*numbers(char *str);

int	solve(int matrix[4][4], int *limits, int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (!check_both(matrix, pos, size))
		{
			matrix[pos / 4][pos % 4] = size;
			if (!check_all(matrix, pos, limits))
			{
				if (solve(matrix, limits, pos + 1))
					return (1);
			}
			else
				matrix[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	display_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(matrix[i][j] + '0');
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	*limits;
	int	matrix[4][4];

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			matrix[i][j] = 0;
	}
	if (check(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	limits = numbers(argv[1]);
	if (solve(matrix, limits, 0))
		display_matrix(matrix);
	else
		ft_putstr("Error\n");
	return (0);
}
