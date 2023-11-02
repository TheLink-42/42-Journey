/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:05:35 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/31 16:44:55 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	init_terrain(t_game *game)
{
	t_terrain	*ter;
	t_image		*img;

	ter = game->terrain;
	img = game->img;
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
	ter->frame = 0;
}

static void	init_player(t_game *game)
{
	t_image		*img;
	t_player	*npc;

	npc = game->player;
	img = game->img;
	npc->right = img->idle_player_r_0;
	npc->left = img->idle_player_l_0;
	npc->facing = RIGHT;
	npc->frame = 0;
}

void	init_structs(t_game *game)
{
	game->img = (t_image *)malloc(sizeof(t_image));
	game->terrain = (t_terrain *)malloc(sizeof(t_terrain));
	game->player = (t_player *)malloc(sizeof(t_player));
	init_img(game);
	init_terrain(game);
	init_player(game);
}
