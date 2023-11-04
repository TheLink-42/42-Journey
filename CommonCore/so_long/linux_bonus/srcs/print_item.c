/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_item.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:29:53 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/04 13:32:33 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

void	print_item(t_game *game, int x, int y)
{
	t_image	*img;

	img = game->img;
	if (!game->frame)
		mlx_put_image_to_window(game->mlx, game->win,
			img->item_0, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			img->item_1, x, y);
}