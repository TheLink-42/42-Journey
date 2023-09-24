/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:06:31 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/23 17:10:04 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSW_H
# define PSW_H

# include "./../libft/libft.h"

typedef struct s_node
{
	int	value;
	int	is_in_stack;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*node;
	int	size;
}	t_stack;

#endif
