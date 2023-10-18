/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:04:43 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/15 18:41:33 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	get_pos(int r, int i, t_game *game)
{
	int		x;
	int		y;
	t_image		*img;
	t_terrain	*ter;

	x = (i % (game->width + 1));
	y = (i / (game->width + 1));
	img = game->images;
	ter = game->terrain;
	if (r == 'C')
		mlx_put_image_to_window(game->mlx, game->win, img->collectable, 64 * x, 64 * y);
	if (r == 'E')
		mlx_put_image_to_window(game->mlx, game->win, img->exit, 64 * x, 64 * y);
	if (r == '1')
		print_walls(game, x, y);
	if (r == '0')
		mlx_put_image_to_window(game->mlx, game->win, ter->land; 64 * x, 64 * y);
	if (r == 'P')
		print_player(game, x, y);
}

void	print_map(t_game *game)
{
	int	i;

	i = 0;
	while (game->map_line[i])
	{
		if (game->map_line[i] == 'C')
			get_pos('C', i, game);
		else if (game->map_line[i] == 'E')
			get_pos('E', i, game);
		else if (game->map_line[i] == 'P')
			get_pos('P', i, game);
		else if (game->map_line[i] == '1')
			get_pos('1', i, game);
		else if (game->map_line[i] == '0')
			get_pos('0', i, game);
		else if (game->map_line[i] != '\n')
			exit(0);
		i++;
	}
}
