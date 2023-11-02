/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:50:21 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/26 08:44:00 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_game_data(t_game *game, char *map)
{
	init_structs(game);
	read_map(map, game);
	ft_printf("Read_map OK\n");
//	init_structs(game);
	ft_printf("Init_structs OK\n");
	game->win = mlx_new_window(game->mlx, game->width * SIZE,
			game->height * SIZE, "so_long");
	print_map(game);
	ft_printf("Read_map OK\n");
}

void	so_long(int argc, char **argv)
{
	t_game	*game;

	(void)argc;
	game = (t_game *)malloc(sizeof(t_game));
	if (!game)
		return ;
	game->mlx = mlx_init();
	init_game_data(game, argv[1]);
	mlx_key_hook(game->win, ft_key_press, game);
	mlx_hook(game->win, 17, 0, ft_free, game);
	mlx_loop_hook(game->mlx, ft_animation, game);
	mlx_loop(game->mlx);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_printf("Error. No se ha introducido ningún mapa");
		return (0);
	}
	so_long(argc, argv);
	return (0);
}
