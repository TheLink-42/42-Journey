/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:06:44 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 12:02:26 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

void	ft_putchar(char c, int out)
{
	write (out, &c, 1);
}

void	ft_putstr(char *str, int out)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], out);
		i++;
	}
}
