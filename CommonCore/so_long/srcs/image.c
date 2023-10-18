/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:31:55 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/17 20:34:30 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_other_img(t_game *game, t_image *img)
{
	img->item = mlx_xpm_file_to_image(game->mlx,
			"imgs/item.xpm", &img->width, &img->height);
	img->open_exit = mlx_xpm_file_to_image(game->mlx,
			"imgs/open_exit.xmp", &img->width, &img->height);
	img->closed_exit = mlx_xpm_file_to_image(game->mlx,
			"imgs/closed_exit.xmp", &img->width, &img->height);
}

static void	init_player_img(t_game *game, t_image *img)
{
	img->fplayer_idle_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/fplayer_idle_0.xpm", &img->width, &img->height);
	img->fplayer_idle_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/fplayer_idle_1.xpm", &img->width, &img->height);
	img->fplayer_action = mlx_xpm_file_to_image(game->mlx,
			"imgs/fplayer_action.xpm", &img->width, &img->height);
	img->bplayer_idle_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/bplayer_idle_0.xpm", &img->width, &img->height);
	img->bplayer_idle_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/bplayer_idle_1.xpm", &img->width, &img->height);
	img->bplayer_action = mlx_xpm_file_to_image(game->mlx,
			"imgs/bplayer_action.xpm", &img->width, &img->height);
	img->lplayer_idle_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/lplayer_idle_0.xpm", &img->width, &img->height);
	img->lplayer_idle_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/lplayer_idle_1.xpm", &img->width, &img->height);
	img->lplayer_action = mlx_xpm_file_to_image(game->mlx,
			"imgs/lplayer_action.xpm", &img->width, &img->height);
	img->rplayer_idle_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/rplayer_idle_0.xpm", &img->width, &img->height);
	img->rplayer_idle_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/rplayer_idle_1.xpm", &img->width, &img->height);
	img->rplayer_action = mlx_xpm_file_to_image(game->mlx,
			"imgs/rplayer_action.xpm", &img->width, &img->height);
}

static void	init_terrain_img_aux(t_game *game, t_image *img)
{
	img->up_r_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_right_1.xpm", &img->width, &img->height);
	img->up_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_1.xpm", &img->width, &img->height);
	img->up_l_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_left_1.xpm", &img->width, &img->height);
	img->left_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/left_1.xpm", &img->width, &img->height);
	img->down_l_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_left_1.xpm", &img->width, &img->height);
	img->down_1 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_1.xpm", &img->width, &img->height);
	img->down_r_1 = mlx_xpm_file_to_image(game->mlx,
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
	img->up_r_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_right_0.xpm", &img->width, &img->height);
	img->up_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_0.xpm", &img->width, &img->height);
	img->up_l_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_left_0.xpm", &img->width, &img->height);
	img->left_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/left_0.xpm", &img->width, &img->height);
	img->down_l_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_left_0.xpm", &img->width, &img->height);
	img->down_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_0.xpm", &img->width, &img->height);
	img->down_r_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_right_0.xpm", &img->width, &img->height);
	img->right_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/right_0.xpm", &img->width, &img->height);
	img->block_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/block_0.xpm", &img->width, &img->height);
	img->land_0 = mlx_xpm_file_to_image(game->mlx,
			"imgs/land_0.xpm", &img->width, &img->height);
	init_terrain_img_aux(game, img);
}

void	init_img(t_game *game)
{
	init_terrain_img(game, game->img);
	init_player_img(game, game->img);
	init_other_img(game, game->img);
}