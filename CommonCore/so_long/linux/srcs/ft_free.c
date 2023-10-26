/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:37:30 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/23 14:14:49 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	ft_free_img_aux(t_game *game, t_image *img)
{
	(void)game;
	mlx_destroy_image(game->mlx, img->up_right_1);
	mlx_destroy_image(game->mlx, img->up_1);
	mlx_destroy_image(game->mlx, img->up_left_1);
	mlx_destroy_image(game->mlx, img->left_1);
	mlx_destroy_image(game->mlx, img->down_left_1);
	mlx_destroy_image(game->mlx, img->down_1);
	mlx_destroy_image(game->mlx, img->down_right_1);
	mlx_destroy_image(game->mlx, img->right_1);
	mlx_destroy_image(game->mlx, img->block_1);
	mlx_destroy_image(game->mlx, img->land_1);
	mlx_destroy_image(game->mlx, img->fplayer_idle_1);
	mlx_destroy_image(game->mlx, img->bplayer_idle_1);
	mlx_destroy_image(game->mlx, img->lplayer_idle_1);
	mlx_destroy_image(game->mlx, img->rplayer_idle_1);
	mlx_destroy_image(game->mlx, img->open_exit);
	mlx_destroy_image(game->mlx, img->closed_exit);
}

static void	ft_free_img(t_game *game, t_image *img)
{
	mlx_destroy_image(game->mlx, img->up_right_0);
	mlx_destroy_image(game->mlx, img->up_0);
	mlx_destroy_image(game->mlx, img->up_left_0);
	mlx_destroy_image(game->mlx, img->left_0);
	mlx_destroy_image(game->mlx, img->down_left_0);
	mlx_destroy_image(game->mlx, img->down_0);
	mlx_destroy_image(game->mlx, img->down_right_0);
	mlx_destroy_image(game->mlx, img->right_0);
	mlx_destroy_image(game->mlx, img->block_0);
	mlx_destroy_image(game->mlx, img->land_0);
	mlx_destroy_image(game->mlx, img->fplayer_idle_0);
	mlx_destroy_image(game->mlx, img->bplayer_idle_0);
	mlx_destroy_image(game->mlx, img->lplayer_idle_0);
	mlx_destroy_image(game->mlx, img->rplayer_idle_0);
	mlx_destroy_image(game->mlx, img->fplayer_action);
	mlx_destroy_image(game->mlx, img->bplayer_action);
	mlx_destroy_image(game->mlx, img->lplayer_action);
	mlx_destroy_image(game->mlx, img->rplayer_action);
	mlx_destroy_image(game->mlx, img->item);
	ft_free_img_aux(game, img);
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
	free(game->terrain);
	free(game->player);
	mlx_destroy_window(game->mlx, game->win);
	//mlx_destroy_display(game->mlx);
	if (game)
		free(game);
	exit(0);
	return (0);
}
