/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:48:54 by mbelmont          #+#    #+#             */
/*   Updated: 2023/08/30 15:48:56 by mbelmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

// Primera linea: no imprimibles, sin repetir, cantidad adecuada
// Mismas col
//
int	set_symbols(char one, char two, char three, t_board *board)
{
	if (one == two || three == two
		|| one == three)
		return (ERROR);
	board->empty = one;
	board->obstacle = two;
	board->full = three;
	return (0);
}

int	check_line(char *str, int *nline, t_board *board)
{
	int		n;
	char	*aux;

	n = ft_strlen(str);
	aux = str;
	if (set_symbols(str[n - 3], str[n - 2], str[n - 1], board) == -1
		|| ft_atoi(str, nline) == -1)
		return (ERROR);
	while (*aux)
	{
		if (*aux < 32 || *aux == 127)
			return (ERROR);
		aux++;
	}
	return (0);
}

int	check_col(int size, int new_size)
{
	if (size != new_size - 1)
		return (ERROR);
	return (0);
}

int	set_symbols2(char one, char two, char three)
{
	if (one == two || three == two
		|| one == three)
		return (ERROR);
	return (0);
}
