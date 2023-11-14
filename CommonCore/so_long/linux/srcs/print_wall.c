/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:26:34 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/14 18:54:15 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	print_corners(t_game *game, t_image *img, int x, int y)
{
	x *= SIZE;
	y *= SIZE;
	if (!x && !y)
	{
		mlx_put_image_to_window(game->mlx, game->win,
			img->up_left, x, y);
	}
	else if (!x)
		mlx_put_image_to_window(game->mlx, game->win,
			img->down_left, x, y);
	else if (!y)
		mlx_put_image_to_window(game->mlx, game->win,
			img->up_right, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			img->down_right, x, y);
}

static void	print_vertical(t_game *game, t_image *img, int x, int y)
{
	x *= SIZE;
	y *= SIZE;
	if (!x)
		mlx_put_image_to_window(game->mlx, game->win,
			img->left, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			img->right, x, y);
}

static void	print_horizontal(t_game *game, t_image *img, int x, int y)
{
	x *= SIZE;
	y *= SIZE;
	if (!y)
		mlx_put_image_to_window(game->mlx, game->win,
			img->up, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			img->down, x, y);
}

void	print_walls(t_game *game, int x, int y)
{
	if ((!x || x == game->width - 1) && (!y || y == game->height - 1))
		print_corners(game, game->img, x, y);
	else if (!x || x == game->width - 1)
		print_vertical(game, game->img, x, y);
	else if (!y || y == game->height - 1)
		print_horizontal(game, game->img, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			game->img->block, x * SIZE, y * SIZE);
}
