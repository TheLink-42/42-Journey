/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:04:43 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/16 11:42:29 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	print_moves(t_game *game)
{
	char	*moves;

	moves = ft_itoa(game->moves);
	mlx_string_put(game->mlx, game->win, 20, 20, 0x00FF0000, "MOVES:");
	mlx_string_put(game->mlx, game->win, 60, 20, 0x00FF0000, moves);
	free(moves);
}

static void	get_pos(int r, int i, t_game *game)
{
	int			x;
	int			y;
	t_terrain	*ter;

	x = (i % game->width);
	y = (i / game->width);
//	ft_printf("Imprimimos la pos: %d,%d\n", x, y);
	ter = game->ter;
	if (r == 'C')
		print_item(game, game->img, SIZE * x, SIZE * y);
	if (r == 'E')
		print_exit(game, SIZE * x, SIZE * y);
	if (r == '1')
		print_walls(game, x, y);
	if (r == '0')
		mlx_put_image_to_window(game->mlx, game->win, ter->land,
			SIZE * x, SIZE * y);
	if (r == 'P')
		print_player(game, game->player, SIZE * x, SIZE * y);
	if (r == 'X')
		mlx_put_image_to_window(game->mlx, game->win, game->enemy,
			SIZE * x, SIZE * y);
}

void	print_map(t_game *game)
{
	int		i;
	int		w;

	w = game->width;
	i = -1;
	while (game->matrix[++i / w])
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
			get_pos('X', i, game);
		print_moves(game);
	}
	
}
