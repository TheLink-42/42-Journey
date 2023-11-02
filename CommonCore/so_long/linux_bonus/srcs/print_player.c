/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:39:07 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/31 16:47:15 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

void	print_player(t_game *game, int x, int y)
{
	t_player	*npc;

	npc = game->player;
	if (npc->facing == LEFT)
		mlx_put_image_to_window(game->mlx, game->win, npc->left, x, y);
	if (npc->facing == RIGHT)
		mlx_put_image_to_window(game->mlx, game->win, npc->right, x, y);
}
