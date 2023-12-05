/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:26:34 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/15 12:40:15 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl_bonus/so_long.h"

static void	print_corners(t_game *game, t_terrain *ter, int x, int y)
{
	x *= SIZE;
	y *= SIZE;
	if (!x && !y)
	{
		mlx_put_image_to_window(game->mlx, game->win,
			ter->up_left, x, y);
	}
	else if (!x)
		mlx_put_image_to_window(game->mlx, game->win,
			ter->down_left, x, y);
	else if (!y)
		mlx_put_image_to_window(game->mlx, game->win,
			ter->up_right, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			ter->down_right, x, y);
}

static void	print_vertical(t_game *game, t_terrain *ter, int x, int y)
{
	x *= SIZE;
	y *= SIZE;
	if (!x)
		mlx_put_image_to_window(game->mlx, game->win,
			ter->left, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			ter->right, x, y);
}

static void	print_horizontal(t_game *game, t_terrain *ter, int x, int y)
{
	x *= SIZE;
	y *= SIZE;
	if (!y)
		mlx_put_image_to_window(game->mlx, game->win,
			ter->up, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			ter->down, x, y);
}

void	print_walls(t_game *game, int x, int y)
{
	if ((!x || x == game->width - 1) && (!y || y == game->height - 1))
		print_corners(game, game->ter, x, y);
	else if (!x || x == game->width - 1)
		print_vertical(game, game->ter, x, y);
	else if (!y || y == game->height - 1)
		print_horizontal(game, game->ter, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			game->ter->block, x * SIZE, y * SIZE);
}
