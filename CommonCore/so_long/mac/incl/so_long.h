/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:45:11 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/02 19:21:21 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"

# ifndef SIZE
#  define SIZE 64
# endif

typedef enum e_key
{
	KEY_W = 13,
	KEY_A = 0,
	KEY_S = 1,
	KEY_D = 2,
	KEY_UP = 126,
	KEY_DOWN = 125,
	KEY_LEFT = 123,
	KEY_RIGHT = 124,
	KEY_ESC = 53,
}	t_key;

typedef struct s_image
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
	void	*player;
	void	*item;
	void	*open_exit;
	void	*closed_exit;
	int		width;
	int		height;
}	t_image;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_image		*img;
	int			width;
	int			height;
	int			num_player;
	int			num_walls;
	int			num_exit;
	int			num_items;
	int			lineflag;
	char		*map_line;
	char		**matrix;
	int			moves;
	int			n;
}	t_game;

//FUNCTIONS
//

void	ft_error(t_game *game, int n);
int		ft_free(t_game *game);
int		check_route(t_game *game);
int		check_extension(char *map);
void	init_img(t_game *game);
void	print_map(t_game *game);
void	print_exit(t_game *game, int x, int y);
void	print_walls(t_game *game, int x, int y);
int		read_map(char *map, t_game *game);
int		ft_key_press(int key, t_game *game);
int		game_exit(t_game *game);

#endif
