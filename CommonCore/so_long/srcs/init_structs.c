/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:05:35 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/16 12:09:43 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_terrain(t_game *game)
{
	t_terrain	*ter;
	t_image		*img;

	ter = game->terrain;
	img = game->img;
	ter->up_r = img->up_r_0;
	ter->up = img->up_0;
	ter->up_l = img->up_l_0;
	ter->left = img->left_0;
	ter->down_l = img->down_l_0;
	ter->down = img->down_0;
	ter->down_r = img->down_r_0;
	ter->right = img->right_0;
	ter->block = img->block_0;
	ter->land = img->land_0;
}

static void	init_player(t_game *game)
{
	t_image		*img;
	t_player	*npc;

	npc = game->player;
	img = game->img;
	npc->front = img->fplayer_idle_0;
	npc->back = img->bplayer_idle_0;
	npc->right = img->rplayer_idle_0;
	npc->left = img->lplayer_idle_0;
	facing = 0;
}

void	init_structs(t_game *game)
{
	game->images = (t_image *)malloc(sizeof(t_image));
	game->terrain = (t_terrain *)malloc(sizeof(t_terrain));
	game->player = (t_player *)malloc(sizeof(t_player));
	init_img(game);
	init_terrain(game);
	init_player(game);
}
