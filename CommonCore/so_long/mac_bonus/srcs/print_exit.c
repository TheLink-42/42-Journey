/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:40:25 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/15 12:36:16 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

void	print_exit(t_game *game, int x, int y)
{
	t_image	*img;

	img = game->img;
	if (!game->num_items && !game->frame)
		mlx_put_image_to_window(game->mlx, game->win,
			img->open_exit_0, x, y);
	else if (!game->num_items)
		mlx_put_image_to_window(game->mlx, game->win,
			img->open_exit_1, x, y);
	else if (!game->frame)
		mlx_put_image_to_window(game->mlx, game->win,
			img->closed_exit_0, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			img->closed_exit_1, x, y);
}
