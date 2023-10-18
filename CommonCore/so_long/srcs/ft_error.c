/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:04:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/14 14:43:57 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

void	ft_error(t_game *game, int n)
{
	if (n == 0)
		ft_printf("Caracteres no válidos\n");
	if (n == 1)
		ft_printf("Error en número de jugadores y/o salidas\n");
	if (n == 2)
		ft_printf("Fallo en los bordes laterales\n");
	if (n == 3)
		ft_printf("Fallo en los bordes horizontales\n");
	if (n == 4)
		ft_printf("Tablero no rectangular\n");
	if (n == 5)
		ft_printf("Fallo en lectura con gnl\n");
	ft_free(game);
}

int	ft_free(t_game *game)
{
	if (game->map_line)
		free(game->map_line);
	if (game)
		free(game);
	exit(0);
	return (0);
}
