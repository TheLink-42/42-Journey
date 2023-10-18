/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:21:15 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/18 12:53:04 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	terrain_animation_aux(t_image *img, t_terrain *ter)
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

static void	terrain_animation(t_image *img, t_terrain *ter)
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
		terrain_animation_aux(img, ter);
		ter->frame = 0;
	}
}

static void	player_animation(t_image *img, t_player *npc)
{
	if (!npc->frame)
	{
		npc->front = img->fplayer_idle_1;
		npc->back = img->bplayer_idle_1;
		npc->left = img->lplayer_idle_1;
		npc->right = img->rplayer_idle_1;
		npc->frame = 1;
	}
	else
	{
		npc->front = img->fplayer_idle_0;
		npc->back = img->bplayer_idle_0;
		npc->left = img->lplayer_idle_0;
		npc->right = img->rplayer_idle_0;
		npc->frame = 0;
	}
}	

int	ft_animation(t_game *game)
{
	player_animation(game->img, game->player);
	terrain_animation(game->img, game->terrain);
	return (0);
}
