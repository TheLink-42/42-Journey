/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:31:55 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/16 12:33:54 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_other_img(t_game *game, t_image *img)
{
	img->item_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/item_0.xpm", &img->width, &img->height);
	img->item_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/item_1.xpm", &img->width, &img->height);
	img->open_exit_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/open_exit_0.xpm", &img->width, &img->height);
	img->open_exit_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/open_exit_1.xpm", &img->width, &img->height);
	img->closed_exit_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/closed_exit_0.xpm", &img->width, &img->height);
	img->closed_exit_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/closed_exit_1.xpm", &img->width, &img->height);
	img->enemy_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/enemy_0.xpm", &img->width, &img->height);
	img->enemy_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/enemy_1.xpm", &img->width, &img->height);
}

static void	init_player_img(t_game *game, t_image *img)
{
	img->idle_player_l_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/idle_player_l_0.xpm", &img->width, &img->height);
	img->idle_player_l_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/idle_player_l_1.xpm", &img->width, &img->height);
	img->idle_player_r_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/idle_player_r_0.xpm", &img->width, &img->height);
	img->idle_player_r_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/idle_player_r_1.xpm", &img->width, &img->height);
	img->mov_player_l_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/mov_player_l_0.xpm", &img->width, &img->height);
	img->mov_player_l_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/mov_player_l_1.xpm", &img->width, &img->height);
	img->mov_player_l_2 = mlx_xpm_file_to_image(game->mlx,
			"imgs/mov_player_l_2.xpm", &img->width, &img->height);
	img->mov_player_r_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/mov_player_r_0.xpm", &img->width, &img->height);
	img->mov_player_r_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/mov_player_r_1.xpm", &img->width, &img->height);
	img->mov_player_r_2 = mlx_xpm_file_to_image(game->mlx,
			"imgs/mov_player_r_2.xpm", &img->width, &img->height);
}

static void	init_terrain_img_aux(t_game *game, t_image *img)
{
	img->up_right_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_right_1.xpm", &img->width, &img->height);
	img->up_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_1.xpm", &img->width, &img->height);
	img->up_left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_left_1.xpm", &img->width, &img->height);
	img->left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/left_1.xpm", &img->width, &img->height);
	img->down_left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_left_1.xpm", &img->width, &img->height);
	img->down_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_1.xpm", &img->width, &img->height);
	img->down_right_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_right_1.xpm", &img->width, &img->height);
	img->right_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/right_1.xpm", &img->width, &img->height);
	img->block_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/block_1.xpm", &img->width, &img->height);
	img->land_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/land_1.xpm", &img->width, &img->height);
}

static void	init_terrain_img(t_game *game, t_image *img)
{
	img->up_right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_right_0.xpm", &img->width, &img->height);
	img->up_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_0.xpm", &img->width, &img->height);
	img->up_left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_left_0.xpm", &img->width, &img->height);
	img->left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/left_0.xpm", &img->width, &img->height);
	img->down_left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_left_0.xpm", &img->width, &img->height);
	img->down_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_0.xpm", &img->width, &img->height);
	img->down_right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_right_0.xpm", &img->width, &img->height);
	img->right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/right_0.xpm", &img->width, &img->height);
	img->block_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/block_0.xpm", &img->width, &img->height);
	img->land_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/land_0.xpm", &img->width, &img->height);
	init_terrain_img_aux(game, img);
}

void	init_img(t_game *game, t_image *img)
{
	init_terrain_img(game, img);
	init_player_img(game, img);
	init_other_img(game, img);
}
