/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:21:08 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/14 15:30:25 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	floodfill(char *map, int pos, t_game *game)
{
	if (map[pos] == '1' || map[pos] == 'F')
		return;
	map[pos] = 'F';
	floodfill(map, pos - game->width - 1, game);
	floodfill(map, pos + game->width + 1, game);
	floodfill(map, pos - 1, game);
	floodfill(map, pos + 1, game);
}

int	check_route(t_game *game)
{
	int	i;

	i = 0;
	while (game->map_line[i] != 'P')
		i++;
	floodfill(game->map_line, i, game);
	i = 0;
	while (game->map_line[i])
	{
		if (game->map_line[i] == 'P' || game->map_line[i] == 'E'
			|| game->map_line[i] == 'C')
			ft_error(game, 9);
		i++;
	}
	return (0);
}

int	check_extension(char *map)
{
	int	i;

	i = ft_strlen(map);
	if (ft_strncmp(&map[i - 4], ".ber", 4))
	{
		ft_printf("Error. Extensión del mapa incorrecta.\n");
		return (-1);
	}
	return (0);
}
