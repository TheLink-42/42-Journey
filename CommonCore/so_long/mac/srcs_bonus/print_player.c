/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:00:53 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/15 14:30:22 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl_bonus/so_long.h"

void	print_player(t_game *game, t_player *player, int x, int y)
{
	if (player->facing == LEFT)
		mlx_put_image_to_window(game->mlx, game->win, player->left, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win, player->right, x, y);
}
