/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_idle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:21:15 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/31 16:55:37 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	animation_idle_terrain_aux(t_image *img, t_terrain *ter)
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

static void	animation_idle_terrain(t_image *img, t_terrain *ter)
{
	if (!ter->frame)
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
		ter->frame = 1;
	}
	else
	{
		animation_idle_terrain_aux(img, ter);
		ter->frame = 0;
	}
}

static void	animation_idle_player(t_image *img, t_player *npc)
{
	if (!npc->frame)
	{
		npc->left = img->idle_player_l_1;
		npc->right = img->idle_player_r_1;
		npc->frame = 1;
	}
	else
	{
		npc->left = img->idle_player_l_0;
		npc->right = img->idle_player_r_0;
		npc->frame = 0;
	}
}	

int	idle_animation(t_game *game)
{
	static int	i = 0;

	i++;
	if (i == 10000)
	{
		animation_idle_player(game->img, game->player);
		animation_idle_terrain(game->img, game->terrain);
		print_map(game);
		i = 0;
	}
	return (0);
}
