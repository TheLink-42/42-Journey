/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:07:43 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/14 16:12:32 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	move_w(t_game *game)
{
	int		i;
//	t_image	*img;

	i = 0;
//	img = game->images;
	while (game->map_line[i] != 'P')
		i++;
	if (game->map_line[i - game->width - 1] == '1')
		return ;
	game->moves++;
	if (game->map_line[i - game->width - 1] == 'C')
		game->num_items--;
	if (game->map_line[i - game->width - 1] == 'E')
		if (game_exit(game))
			return ;
	game->map_line[i] = '0';
	game->map_line[i - game->width - 1] = 'P';
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

static void	move_a(t_game *game)
{
	int		i;
//	t_image	*img;

	i = 0;
//	img = game->images;
	while (game->map_line[i] != 'P')
		i++;
	if (game->map_line[i - 1] == '1')
		return ;
	game->moves++;
	if (game->map_line[i - 1] == 'C')
		game->num_items--;
	if (game->map_line[i - 1] == 'E')
		if (game_exit(game))
			return ;
	game->map_line[i] = '0';
	game->map_line[i - 1] = 'P';
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

static void	move_s(t_game *game)
{
	int		i;
//	t_image	*img;

	i = 0;
//	img = game->images;
	while (game->map_line[i] != 'P')
		i++;
	if (game->map_line[i + game->width + 1] == '1')
		return ;
	game->moves++;
	if (game->map_line[i + game->width + 1] == 'C')
		game->num_items--;
	if (game->map_line[i + game->width + 1] == 'E')
		if (game_exit(game))
			return ;
	game->map_line[i] = '0';
	game->map_line[i + game->width + 1] = 'P';
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

static void	move_d(t_game *game)
{
	int		i;
//	t_image	*img;

	i = 0;
//	img = game->images;
	while (game->map_line[i] != 'P')
		i++;
	if (game->map_line[i + 1] == '1')
		return ;
	game->moves++;
	if (game->map_line[i + 1] == 'C')
		game->num_items--;
	if (game->map_line[i + 1] == 'E')
		if (game_exit(game))
			return ;
	game->map_line[i] = '0';
	game->map_line[i + 1] = 'P';
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

int	key_press(int key, t_game *game)
{
	if (key == KEY_ESC)
	{
		mlx_destroy_window(game->mlx, game->window);
		ft_free(game);
	}
	if (key == KEY_W || key == KEY_UP)
		move_w(game);
	if (key == KEY_A || key == KEY_LEFT)
		move_a(game);
	if (key == KEY_S || key == KEY_DOWN)
		move_s(game);
	if (key == KEY_D || key == KEY_RIGHT)
		move_d(game);
}
