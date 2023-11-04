/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:04:43 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/04 13:59:29 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	get_pos(int r, int i, t_game *game)
{
	int			x;
	int			y;
	t_terrain	*ter;

	x = (i % game->width);
	y = (i / game->width);
	ter = game->terrain;
	if (r == 'C')
		print_item(game, SIZE * x, SIZE * y);
	if (r == 'E')
		print_exit(game, SIZE * x, SIZE * y);
	if (r == '1')
		print_walls(game, x, y);
	if (r == '0')
		mlx_put_image_to_window(game->mlx, game->win, ter->land,
			SIZE * x, SIZE * y);
	if (r == 'P')
		print_player(game, SIZE * x, SIZE * y);
}

void	print_map(t_game *game)
{
	int	i;
	int	w;

	w = game->width;
	i = 0;
	while (game->matrix[i / w])
	{
		if (game->matrix[i / w][i % w] == 'C')
			get_pos('C', i, game);
		else if (game->matrix[i / w][i % w] == 'E')
			get_pos('E', i, game);
		else if (game->matrix[i / w][i % w] == 'P')
			get_pos('P', i, game);
		else if (game->matrix[i / w][i % w] == '1')
			get_pos('1', i, game);
		else if (game->matrix[i / w][i % w] == '0')
			get_pos('0', i, game);
		else
			exit(0);
		i++;
	}
}
