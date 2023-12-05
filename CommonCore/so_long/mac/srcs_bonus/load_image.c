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

#include "../incl_bonus/so_long.h"

static void	init_other_img(t_game *game, t_image *img)
{
	img->item_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/item_0.xpm", &img->width, &img->height);
	img->item_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/item_1.xpm", &img->width, &img->height);
	img->open_exit_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/open_exit_0.xpm", &img->width, &img->height);
	img->open_exit_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/open_exit_1.xpm", &img->width, &img->height);
	img->closed_exit_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/closed_exit_0.xpm", &img->width, &img->height);
	img->closed_exit_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/closed_exit_1.xpm", &img->width, &img->height);
	img->enemy_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/enemy_0.xpm", &img->width, &img->height);
	img->enemy_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/enemy_1.xpm", &img->width, &img->height);
}

static void	init_player_img(t_game *game, t_image *img)
{
	img->idle_player_l_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/idle_player_l_0.xpm", &img->width, &img->height);
	img->idle_player_l_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/idle_player_l_1.xpm", &img->width, &img->height);
	img->idle_player_r_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/idle_player_r_0.xpm", &img->width, &img->height);
	img->idle_player_r_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/idle_player_r_1.xpm", &img->width, &img->height);
	img->mov_player_l_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/mov_player_l_0.xpm", &img->width, &img->height);
	img->mov_player_l_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/mov_player_l_1.xpm", &img->width, &img->height);
	img->mov_player_l_2 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/mov_player_l_2.xpm", &img->width, &img->height);
	img->mov_player_r_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/mov_player_r_0.xpm", &img->width, &img->height);
	img->mov_player_r_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/mov_player_r_1.xpm", &img->width, &img->height);
	img->mov_player_r_2 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/mov_player_r_2.xpm", &img->width, &img->height);
}

static void	init_terrain_img_aux(t_game *game, t_image *img)
{
	img->up_right_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/up_right_1.xpm", &img->width, &img->height);
	img->up_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/up_1.xpm", &img->width, &img->height);
	img->up_left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/up_left_1.xpm", &img->width, &img->height);
	img->left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/left_1.xpm", &img->width, &img->height);
	img->down_left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/down_left_1.xpm", &img->width, &img->height);
	img->down_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/down_1.xpm", &img->width, &img->height);
	img->down_right_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/down_right_1.xpm", &img->width, &img->height);
	img->right_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/right_1.xpm", &img->width, &img->height);
	img->block_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/block_1.xpm", &img->width, &img->height);
	img->land_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/land_1.xpm", &img->width, &img->height);
}

static void	init_terrain_img(t_game *game, t_image *img)
{
	img->up_right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/up_right_0.xpm", &img->width, &img->height);
	img->up_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/up_0.xpm", &img->width, &img->height);
	img->up_left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/up_left_0.xpm", &img->width, &img->height);
	img->left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/left_0.xpm", &img->width, &img->height);
	img->down_left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/down_left_0.xpm", &img->width, &img->height);
	img->down_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/down_0.xpm", &img->width, &img->height);
	img->down_right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/down_right_0.xpm", &img->width, &img->height);
	img->right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/right_0.xpm", &img->width, &img->height);
	img->block_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/block_0.xpm", &img->width, &img->height);
	img->land_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs_bonus/land_0.xpm", &img->width, &img->height);
	init_terrain_img_aux(game, img);
}

void	init_img(t_game *game, t_image *img)
{
	init_terrain_img(game, img);
	init_player_img(game, img);
	init_other_img(game, img);
}
