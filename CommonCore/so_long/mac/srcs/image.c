/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:31:55 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/29 00:14:43 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_other_img(t_game *game, t_image *img)
{
	img->item = mlx_xpm_file_to_image(game->mlx,
			"imgs/item.xpm", &img->width, &img->height);
	img->open_exit = mlx_xpm_file_to_image(game->mlx,
			"imgs/open_exit.xpm", &img->width, &img->height);
	img->closed_exit = mlx_xpm_file_to_image(game->mlx,
			"imgs/closed_exit.xpm", &img->width, &img->height);
}

static void	init_player_img(t_game *game, t_image *img)
{
	img->player = mlx_xpm_file_to_image(game->mlx,
			"imgs/player.xpm", &img->width, &img->height);
}

static void	init_terrain_img(t_game *game, t_image *img)
{
	img->up_right = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_right.xpm", &img->width, &img->height);
	img->up = mlx_xpm_file_to_image(game->mlx,
			"imgs/up.xpm", &img->width, &img->height);
	img->up_left = mlx_xpm_file_to_image(game->mlx,
			"imgs/up_left.xpm", &img->width, &img->height);
	img->left = mlx_xpm_file_to_image(game->mlx,
			"imgs/left.xpm", &img->width, &img->height);
	img->down_left = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_left.xpm", &img->width, &img->height);
	img->down = mlx_xpm_file_to_image(game->mlx,
			"imgs/down.xpm", &img->width, &img->height);
	img->down_right = mlx_xpm_file_to_image(game->mlx,
			"imgs/down_right.xpm", &img->width, &img->height);
	img->right = mlx_xpm_file_to_image(game->mlx,
			"imgs/right.xpm", &img->width, &img->height);
	img->block = mlx_xpm_file_to_image(game->mlx,
			"imgs/block.xpm", &img->width, &img->height);
	img->land = mlx_xpm_file_to_image(game->mlx,
			"imgs/land.xpm", &img->width, &img->height);
}

void	init_img(t_game *game)
{
	game->img = (t_image *)malloc(sizeof(t_image));
	init_terrain_img(game, game->img);
	init_player_img(game, game->img);
	init_other_img(game, game->img);
}
