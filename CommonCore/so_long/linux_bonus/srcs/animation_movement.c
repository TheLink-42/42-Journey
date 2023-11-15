/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_movement.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:21:15 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/04 13:58:28 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	mov_anim_right_0(t_game *game, t_player *player, t_image *img)
{
	print_map(game);
	player->right = img->mov_player_r_0;
	//usleep(200000);
	print_map(game);
	player->right = img->mov_player_r_1;
	//usleep(200000);
	print_map(game);
	player->right = img->mov_player_r_2;
	//usleep(200000);
	print_map(game);
}

static void	mov_anim_right_1(t_game *game, t_player *player, t_image *img)
{
	print_map(game);
	player->right = img->mov_player_r_1;
	//usleep(200000);
	print_map(game);
	player->right = img->mov_player_r_0;
	//usleep(200000);
	print_map(game);
	if (!game->frame)
		player->right = img->idle_player_r_0;
	else
		player->right = img->idle_player_r_1;
	//usleep(200000);
	print_map(game);
}

static void	mov_anim_left_0(t_game *game, t_player *player, t_image *img)
{
	print_map(game);
	player->left = img->mov_player_l_0;
	usleep(200000);
	print_map(game);
	player->left = img->mov_player_l_1;
	usleep(200000);
	print_map(game);
	player->left = img->mov_player_l_2;
	usleep(200000);
	print_map(game);
}

static void	mov_anim_left_1(t_game *game, t_player *player, t_image *img)
{
	print_map(game);
	player->left = img->mov_player_l_1;
	//usleep(200000);
	print_map(game);
	player->left = img->mov_player_l_0;
	//usleep(200000);
	print_map(game);
	if (!game->frame)
		player->left = img->idle_player_l_0;
	else
		player->left = img->idle_player_l_1;
	//usleep(200000);
	print_map(game);
}

int	movement_animation(t_game *game, int situation)
{
	if (game->player->facing == LEFT && !situation)
		mov_anim_left_0(game, game->player, game->img);
	else if (!situation)
		mov_anim_right_0(game, game->player, game->img);
	else if (game->player->facing == LEFT)
		mov_anim_left_1(game, game->player, game->img);
	else
		mov_anim_right_1(game, game->player, game->img);
	return (0);
}
