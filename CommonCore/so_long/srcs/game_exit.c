/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:08:35 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/14 16:11:56 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

int	game_exit(t_game *game)
{
	if (!game->num_items)
	{
		mlx_destroy_window(game->mlx, game->window);
		ft_free(game);
	}
	return (1);
}
