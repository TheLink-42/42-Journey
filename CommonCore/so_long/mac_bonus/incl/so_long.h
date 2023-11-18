/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:45:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/16 12:33:40 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"

# ifndef SIZE
#  define SIZE 64
# endif

typedef enum e_side
{
	LEFT = 0,
	RIGHT = 1,
}	t_side;

typedef enum e_key
{
	KEY_W = 13,
	KEY_A = 0,
	KEY_S = 1,
	KEY_D = 2,
	KEY_UP = 65362,
	KEY_DOWN = 65364,
	KEY_LEFT = 65361,
	KEY_RIGHT = 65363,
	KEY_ESC = 53,
}	t_key;

typedef struct s_image
{
	void	*up_right_0;
	void	*up_right_1;
	void	*up_0;
	void	*up_1;
	void	*up_left_0;
	void	*up_left_1;
	void	*left_0;
	void	*left_1;
	void	*down_left_0;
	void	*down_left_1;
	void	*down_0;
	void	*down_1;
	void	*down_right_0;
	void	*down_right_1;
	void	*right_0;
	void	*right_1;
	void	*block_0;
	void	*block_1;
	void	*land_0;
	void	*land_1;
	void	*idle_player_l_0;
	void	*idle_player_l_1;
	void	*idle_player_r_0;
	void	*idle_player_r_1;
	void	*mov_player_l_0;
	void	*mov_player_l_1;
	void	*mov_player_l_2;
	void	*mov_player_r_0;
	void	*mov_player_r_1;
	void	*mov_player_r_2;
	void	*enemy_0;
	void	*enemy_1;
	void	*item_0;
	void	*item_1;
	void	*open_exit_0;
	void	*open_exit_1;
	void	*closed_exit_0;
	void	*closed_exit_1;
	int		width;
	int		height;
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
}	t_terrain;

typedef struct s_player
{
	void	*left;
	void	*right;
	int		facing;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_image		*img;
	t_player	*player;
	t_terrain	*ter;
	void		*enemy;
	int			width;
	int			height;
	int			num_player;
	int			num_exit;
	int			num_items;
	int			lineflag;
	char		*map_line;
	char		**matrix;
	int			moves;
	int			frame;
}	t_game;

//FUNCTIONS
//

int		check_route(t_game *game);
int		check_extension(char *map);
void	ft_error(t_game *game, int n);
int		ft_free(t_game *game);

void	init_img(t_game *game, t_image *img);
void	init_structs(t_game *game);
void	print_map(t_game *game);
void	print_item(t_game *game, t_image *img, int x, int y);
void	print_enemy(t_game *game, int x, int y);
void	print_exit(t_game *game, int x, int y);
void	print_walls(t_game *game, int x, int y);
void	print_player(t_game *game, t_player *player, int x, int y);
int		read_map(char *map, t_game *game);
int		ft_key_press(int key, t_game *game);
int		idle_animation(t_game *game);
int		mov_animation(t_game *game, int situation);
int		game_exit(t_game *game);

#endif
