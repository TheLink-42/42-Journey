/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:39:07 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/15 17:46:00 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

void	print_player(t_game *game, int x, int y)
{
	t_player	*npc;

	npc = game->player;
	if (!npc->facing)
		mlx_put_image_to_window(game->mlx, game->win, npc->front, x, y);
	if (npc->facing == 1)
		mlx_put_image_to_window(game->mlx, game->win, npc->back, x, y);
	if (npc->facing == 2)
		mlx_put_image_to_window(game->mlx, game->win, npc->left, x, y);
	if (npc->facing == 3)
		mlx_put_image_to_window(game->mlx, game->win, npc->right, x, y);
}
