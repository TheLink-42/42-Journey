/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:22:52 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/20 18:55:08 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_atoi(char *str);
int	check_up(int matrix[4][4], int pos, int *limits);
int	check_down(int matrix[4][4], int pos, int *limits);
int	check_right(int matrix[4][4], int pos, int *limits);
int	check_left(int matrix[4][4], int pos, int *limits);

int	check(int argc, char **argv)
{
	char	*aux;
	int		flag;

	aux = argv[1];
	flag = 1;
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != (8 * 4 -1))
		return (1);
	while (*aux)
	{
		if (flag == 1 && (*aux < '1' || *aux > '4'))
			return (1);
		if (flag == -1 && *aux != ' ')
			return (1);
		aux++;
		flag = -flag;
	}
	return (0);
}

int	*numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}

int	check_all(int matrix[4][4], int pos, int *limits)
{
	if (check_up(matrix, pos, limits))
		return (1);
	if (check_down(matrix, pos, limits))
		return (1);
	if (check_right(matrix, pos, limits))
		return (1);
	if (check_left(matrix, pos, limits))
		return (1);
	return (0);
}
