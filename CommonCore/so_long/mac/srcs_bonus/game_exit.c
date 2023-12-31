/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:08:35 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/22 22:50:06 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl_bonus/so_long.h"

int	game_exit(t_game *game)
{
	if (!game->num_items)
		ft_free(game);
	return (1);
}
