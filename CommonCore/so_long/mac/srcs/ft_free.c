/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:37:30 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/02 19:03:44 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	ft_free_img(t_game *game, t_image *img)
{
	mlx_destroy_image(game->mlx, img->up_right);
	mlx_destroy_image(game->mlx, img->up);
	mlx_destroy_image(game->mlx, img->up_left);
	mlx_destroy_image(game->mlx, img->left);
	mlx_destroy_image(game->mlx, img->down_left);
	mlx_destroy_image(game->mlx, img->down);
	mlx_destroy_image(game->mlx, img->down_right);
	mlx_destroy_image(game->mlx, img->right);
	mlx_destroy_image(game->mlx, img->block);
	mlx_destroy_image(game->mlx, img->land);
	mlx_destroy_image(game->mlx, img->player);
	mlx_destroy_image(game->mlx, img->item);
	mlx_destroy_image(game->mlx, img->open_exit);
	mlx_destroy_image(game->mlx, img->closed_exit);
}

static void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix[i]);
	free(matrix);
}

int	ft_free(t_game *game)
{
	if (game->map_line)
		free(game->map_line);
	if (game->matrix)
		ft_free_matrix(game->matrix);
	ft_free_img(game, game->img);
	free(game->img);
	mlx_clear_window(game->mlx, game->win);
	mlx_destroy_window(game->mlx, game->win);
	if (game)
		free(game);
	exit(0);
	return (0);
}
