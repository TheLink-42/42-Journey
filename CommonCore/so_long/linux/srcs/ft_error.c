/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:04:42 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/20 19:54:49 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

void	ft_error(t_game *game, int n)
{
	if (n == 0)
		ft_printf("Error. Caracteres no válidos.\n");
	if (n == 1)
		ft_printf("Error. Número de jugadores y/o salidas no válido.\n");
	if (n == 2)
		ft_printf("Error. Fallo en los bordes laterales.\n");
	if (n == 3)
		ft_printf("Error. Fallo en los bordes horizontales.\n");
	if (n == 4)
		ft_printf("Error. Tablero no rectangular.\n");
	if (n == 5)
		ft_printf("Error. Fallo en lectura con gnl.\n");
	if (n == 6)
		ft_printf("Error. Formato de mapa incorrecto.\n");
	ft_free(game);
}
