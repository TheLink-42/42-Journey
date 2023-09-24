/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:06:29 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 16:21:40 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

int	error(t_stack *a, t_stack *b)
{
	free_stack(&a);
	free_stack(&b);
	ft_putstr_fd("Error\n", 2);
	return (0);
}
