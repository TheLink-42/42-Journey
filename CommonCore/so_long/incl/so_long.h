/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:45:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/12 00:46:00 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../mlx_linux/mlx.h"


typedef enum e_tiletype
{
	EMPTY = '0',
	WALL = '1',
	COLLECTABLE = 'C',
	PLAYER = 'P',
	EXIT = 'E',
}	t_tiletype;

typedef enum e_key
{
	KEY_W = 119,
	KEY_A = 97,
	KEY_S = 115,
	KEY_D = 100,
	KEY_UP = 65362,
	KEY_DOWN = 65364,
	KEY_LEFT = 65361,
	KEY_RIGHT = 65363,
	KEY_ESC = 65307,
}	t_key;

typedef struct s_image
{
	void	*wall_up_right;
	void	*wall_up;
	void	*wall_up_left;
	void	*wall_left;
	void	*wall_down_left;
	void	*wall_down;
	void	*wall_down_right;
	void	*wall_right;
	void	*wall_block;
	void	*empty;
	void	*player_idle_left_0;
	void	*player_idle_left_1;
	void	*player_action_left;
	void	*player_idle_back_0;
	void	*player_idle_back_1;
	void	*player_action_back;
	void	*player_idle_right_0;
	void	*player_idle_right_1;
	void	*player_action_right;
	void	*player_idle_front_0;
	void	*player_idle_front_1;
	void	*player_action_front;
	void	*collectable;
	void	*exit;
}	t_image;

typedef struct s_player
{
	void	*current_image;
	int	frame_count;
	int	facing;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*window;
	t_image		images;
	int		width;
	int		height;
	int		num_player;
	int		num_walls;
	int		num_exit;
	int		num_items;
	int		lineflag;
	char		*map_line;
}	t_game;

#endif
