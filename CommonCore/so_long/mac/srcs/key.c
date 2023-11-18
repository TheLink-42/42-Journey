/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:07:43 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/02 19:37:02 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	move_w(t_game *game)
{
	int		i;
	int		w;

	i = 0;
	w = game->width;
	while (game->matrix[i / w][i % w] != 'P')
		i++;
	if (game->matrix[(i - w) / w][i % w] == '1')
		return ;
	if (game->matrix[(i - w) / w][i % w] == 'C')
		game->num_items--;
	if (game->matrix[(i - w) / w][i % w] == 'E')
		if (game_exit(game))
			return ;
	game->matrix[i / w][i % w] = '0';
	game->matrix[(i - w) / w][i % w] = 'P';
	game->moves++;
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

static void	move_a(t_game *game)
{
	int		i;
	int		w;

	i = 0;
	w = game->width;
	while (game->matrix[i / w][i % w] != 'P')
		i++;
	if (game->matrix[i / w][(i - 1) % w] == '1')
		return ;
	if (game->matrix[i / w][(i - 1) % w] == 'C')
		game->num_items--;
	if (game->matrix[i / w][(i - 1) % w] == 'E')
		if (game_exit(game))
			return ;
	game->matrix[i / w][i % w] = '0';
	game->matrix[i / w][(i - 1) % w] = 'P';
	game->moves++;
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

static void	move_s(t_game *game)
{
	int		i;
	int		w;

	i = 0;
	w = game->width;
	while (game->matrix[i / w][i % w] != 'P')
		i++;
	if (game->matrix[(i + w) / w][i % w] == '1')
		return ;
	if (game->matrix[(i + w) / w][i % w] == 'C')
		game->num_items--;
	if (game->matrix[(i + w) / w][i % w] == 'E')
		if (game_exit(game))
			return ;
	game->matrix[i / w][i % w] = '0';
	game->matrix[(i + w) / w][i % w] = 'P';
	game->moves++;
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

static void	move_d(t_game *game)
{
	int	i;
	int	w;

	i = 0;
	w = game->width;
	while (game->matrix[i / w][i % w] != 'P')
		i++;
	if (game->matrix[i / w][(i + 1) % w] == '1')
		return ;
	if (game->matrix[i / w][(i + 1) % w] == 'C')
		game->num_items--;
	if (game->matrix[i / w][(i + 1) % w] == 'E')
		if (game_exit(game))
			return ;
	game->matrix[i / w][i % w] = '0';
	game->matrix[i / w][(i + 1) % w] = 'P';
	game->moves++;
	ft_printf("Moves: %d\n", game->moves);
	print_map(game);
}

int	ft_key_press(int key, t_game *game)
{
	if (key == KEY_ESC)
		ft_free(game);
	if (key == KEY_W || key == KEY_UP)
		move_w(game);
	if (key == KEY_A || key == KEY_LEFT)
		move_a(game);
	if (key == KEY_S || key == KEY_DOWN)
		move_s(game);
	if (key == KEY_D || key == KEY_RIGHT)
		move_d(game);
	return (0);
}
