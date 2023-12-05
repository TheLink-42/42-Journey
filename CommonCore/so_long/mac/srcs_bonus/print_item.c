/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_item.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:56:40 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/15 14:30:07 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl_bonus/so_long.h"

void	print_item(t_game *game, t_image *img, int x, int y)
{
	if (!game->frame)
		mlx_put_image_to_window(game->mlx, game->win, img->item_0, x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win, img->item_1, x, y);
}
