/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:50:21 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/18 12:58:35 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_game_data(t_game *game, char *map)
{
	read_map(map, game);
	init_structs(game);
	game->window = mlx_new_window(game->mlx, game->width * 64,
			game->height * 64, "so_long");
	print_map(game);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc < 2)
		return (0);
	game = (t_game *)malloc(sizeof(t_game));
	if (!game)
		return (1);
	game->mlx = mlx_init();
	init_game_data(game, argv[1]);
	mlx_key_hook(game->window, key_press, game);
	mlx_hook(game->window, 17, 0, ft_free, game);
	mlx_loop(game->mlx);
	ft_free(game);
	return (0);
}
