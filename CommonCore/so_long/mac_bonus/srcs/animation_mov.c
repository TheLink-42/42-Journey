/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_mov.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1823/11/15 14:38:51 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/15 15:08:09 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	fade_animation_left(t_game *game, t_player *player, t_image *img)
{
	usleep(17000);
	print_map(game);
	player->left = img->mov_player_l_0;
	usleep(17000);
	print_map(game);
	player->left = img->mov_player_l_1;
	usleep(17000);
	print_map(game);
	player->left = img->mov_player_l_2;
	usleep(17000);
	print_map(game);
}

static void	fade_animation_right(t_game *game, t_player *player, t_image *img)
{
	usleep(17000);
	print_map(game);
	player->right = img->mov_player_r_0;
	usleep(17000);
	print_map(game);
	player->right = img->mov_player_r_1;
	usleep(17000);
	print_map(game);
	player->right = img->mov_player_r_2;
	usleep(17000);
	print_map(game);
}

static void	rfade_animation_left(t_game *game, t_player *player, t_image *img)
{
	usleep(17000);
	print_map(game);
	player->left = img->mov_player_l_1;
	usleep(17000);
	print_map(game);
	player->left = img->mov_player_l_0;
	usleep(17000);
	print_map(game);
	if (!game->frame)
		player->left = img->idle_player_l_0;
	else
		player->left = img->idle_player_l_1;
	usleep(17000);
	print_map(game);
}

static void	rfade_animation_right(t_game *game, t_player *player, t_image *img)
{
	usleep(17000);
	print_map(game);
	player->right = img->mov_player_r_1;
	usleep(17000);
	print_map(game);
	player->right = img->mov_player_r_0;
	usleep(17000);
	print_map(game);
	if (!game->frame)
		player->right = img->idle_player_r_0;
	else
		player->right = img->idle_player_r_1;
	usleep(17000);
	print_map(game);	
}

int	mov_animation(t_game *game, int situation)
{
	if (!situation && game->player->facing == LEFT)
		fade_animation_left(game, game->player, game->img);
	else if (!situation)
		fade_animation_right(game, game->player, game->img);
	else if (game->player->facing == LEFT)
		rfade_animation_left(game, game->player, game->img);
	else
		rfade_animation_right(game, game->player, game->img);
	return (0);
}