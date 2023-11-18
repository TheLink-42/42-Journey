/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_idle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:15:42 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/16 12:32:44 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	idle_animation_enemy(t_game *game, t_image *img)
{
	if (!game->frame)
		game->enemy = img->enemy_1;
	else
		game->enemy = img->enemy_0;
}

static void	idle_animation_terrain_aux(t_image *img, t_terrain *ter)
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

static void	idle_animation_terrain(t_game *game, t_image *img, t_terrain *ter)
{
	if (!game->frame)
	{
		ter->up_right = img->up_right_1;
		ter->up = img->up_1;
		ter->up_left = img->up_left_1;
		ter->left = img->left_1;
		ter->down_left = img->down_left_1;
		ter->down = img->down_1;
		ter->down_right = img->down_right_1;
		ter->right = img->right_1;
		ter->block = img->block_1;
		ter->land = img->land_1;
	}
	else
	{
		idle_animation_terrain_aux(img, ter);
	}
}

static void	idle_animation_player(t_game *game, t_image *img, t_player *npc)
{
	if (!game->frame)
	{
		npc->left = img->idle_player_l_1;
		npc->right = img->idle_player_r_1;
	}
	else
	{
		npc->left = img->idle_player_l_0;
		npc->right = img->idle_player_r_0;
	}
}

int	idle_animation(t_game *game)
{
	static int	i = 0;

	if (++i == 10000)
	{
		idle_animation_player(game, game->img, game->player);
		idle_animation_terrain(game, game->img, game->ter);
		idle_animation_enemy(game, game->img);
		print_map(game);
		if (!game->frame)
			game->frame = 1;
		else
			game->frame = 0;
		i = 0;
	}
	return (0);
}
