/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:56:56 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/16 11:56:45 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/so_long.h"

static void	adjust_lineflag(char *line, t_game *game)
{
	int	i;

	i = 0;
	game->lineflag = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			game->lineflag = 1;
		i++;
	}
}

static void	check_horizontal_limits(t_game *game)
{
	int	i;

	i = 0;
	while (game->map_line[i] != '\n')
	{
		if (game->map_line[i] != '1')
			ft_error(game, 3);
		i++;
	}
	i = ft_strlen(game->map_line) - game->width + 2;
	while (game->map_line[i] != '\n')
	{
		if (game->map_line[i] != '1')
			ft_error(game, 3);
		i++;
	}
}

static void	check_limits(t_game *game)
{
	int	i;
	int	len;

	len = ft_strlen(game->map_line);
	i = game->width + 1;
	while (i < len)
	{
		if (game->map_line[i] != '1')
			ft_error(game, 2);
		if (game->map_line[i - 2] != '1')
			ft_error(game, 2);
		i += game->width + 1;
	}
	check_horizontal_limits(game);
}

static void	check_line(t_game *game)
{
	int	i;

	i = 0;
	while (game->map_line[i])
	{
		if (game->map_line[i] == 'C')
			game->num_items++;
		else if (game->map_line[i] == 'E')
			game->num_exit++;
		else if (game->map_line[i] == 'P')
			game->num_player++;
		else if (game->map_line[i] != '0' && game->map_line[i] != '\n'
			&& game->map_line[i] != '1' && game->map_line[i] != 'X')
			ft_error(game, 0);
		i++;
	}
	if (game->num_player != 1 || game->num_exit != 1)
		ft_error(game, 1);
}

int	read_map(char *map, t_game *game)
{
	int		fd;
	char	*line;

	fd = open(map, O_RDONLY);
	if (fd < 0)
		ft_free(game);
	game->lineflag = 2;
	while (game->lineflag)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		game->height++;
		if (game->lineflag == 2)
			game->width = ft_strlen(line) - 1;
		adjust_lineflag(line, game);
		if ((int)ft_strlen(line) - 1 != game->width)
			ft_error(game, 4);
		game->map_line = gnl_strjoin(game->map_line, line);
		free(line);
	}
	close(fd);
	check_limits(game);
	check_line(game);
	game->matrix = ft_split(game->map_line, '\n');
	return (0);
}
