/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:20:29 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/27 20:08:29 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void			ft_putstr(char *str);
int				ft_strlen(char *str);
unsigned int	ft_atoi(char *str);
void			custom_cpy(char *dest, char *src);
void			ft_nbr(unsigned int n, unsigned int **nvec, int *pos);

typedef struct s_node
{
	unsigned int	key;
	char			*value;
	struct s_node	*next;
}	t_node;

#endif
