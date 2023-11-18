/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:11:58 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/16 18:58:21 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_terrain(t_image *img, t_terrain *ter)
{
	ter->up_right = img->up_right_0;
	ter->up = img->up_0;
	ter->up_left = img->up_left_0;
	ter->left = img->left_0;
	ter->down_left = img->down_left_0;
	ter->down = img->down_0;
	ter->down_right = img->down_right_0;
	ter->right = img->right_0;
	ter->block = img->block_0;
	ter->land = img->land_0;
}

static void	init_player(t_image *img, t_player *player)
{
	player->left = img->idle_player_l_0;
	player->right = img->idle_player_r_0;
	player->facing = LEFT;
}

void	init_structs(t_game *game)
{
	game->mlx = mlx_init();
	game->img = (t_image *)malloc(sizeof(t_image));
	game->player = (t_player *)malloc(sizeof(t_player));
	game->ter = (t_terrain *)malloc(sizeof(t_terrain));
	init_img(game, game->img);
	init_terrain(game->img, game->ter);
	init_player(game->img, game->player);
	game->enemy = game->img->enemy_0;
	game->width = 0;
	game->height = 0;
	game->num_player = 0;
	game->num_exit = 0;
	game->num_items = 0;
	game->map_line = NULL;
	game->moves = 0;
	game->frame = 0;
}