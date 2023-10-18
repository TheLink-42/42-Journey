/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:45:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/18 10:35:32 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../mlx_linux/mlx.h"

# ifndef IMG_SIZE
#  define IMG_SIZE 64
# endif

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
	void	*up_r_0;
	void	*up_r_1;
	void	*up_0;
	void	*up_1;
	void	*up_l_0;
	void	*up_l_1;
	void	*left_0;
	void	*left_1;
	void	*down_l_0;
	void	*down_l_1;
	void	*down_0;
	void	*down_1;
	void	*down_r_0;
	void	*down_r_1;
	void	*right_0;
	void	*right_1;
	void	*block_0;
	void	*block_1;
	void	*land_0;
	void	*land_1;
	void	*fplayer_idle_0;
	void	*fplayer_idle_1;
	void	*fplayer_action;
	void	*bplayer_idle_0;
	void	*bplayer_idle_1;
	void	*bplayer_action;
	void	*lplayer_idle_0;
	void	*lplayer_idle_1;
	void	*lplayer_action;
	void	*rplayer_idle_0;
	void	*rplayer_idle_1;
	void	*rplayer_action;
	void	*item;
	void	*open_exit;
	void	*closed_exit;
	int	width;
	int	height;
}	t_image;

typedef struct s_terrain
{
	void	*up_right;
	void	*up;
	void	*up_left;
	void	*left;
	void	*down_left;
	void	*down;
	void	*down_right;
	void	*right;
	void	*block;
	void	*land;
	int	frame;
}	t_terrain;

typedef struct s_player
{
	void	*front;
	void	*back;
	void	*right;
	void	*left;
	int	facing;
	int	frame;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_image		*img;
	t_terrain	*terrain;
	t_player	*player;
	int		width;
	int		height;
	int		num_player;
	int		num_walls;
	int		num_exit;
	int		num_items;
	int		lineflag;
	char		*map_line;
	int		moves;
}	t_game;

//FUNCTIONS
//

void	ft_error(t_game *game, int n);
int		ft_free(t_game *game);

void	init_img(t_game *game);
void	print_map(t_game *game);
void	print_walls(t_game *game, int x, int y);
int		read_map(char *map, t_game *game);
int		key_press(int key, t_game *game);
int		game_exit(t_game *game);

#endif
