/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:41:02 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/12 18:01:43 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int size, char fir, char sec, char thi);

void	rush(int x, int y)
{
	if ((x != 0) && (y != 0))
	{
		if (x < 0)
			x = x * (-1);
		if (y < 0)
			y = y * (-1);
		ft_putchar(x, 'A', 'B', 'C');
		write (1, "\n", 1);
		while (y > 2)
		{
			ft_putchar(x, 'B', ' ', 'B');
			write (1, "\n", 1);
			y--;
		}
		if (y > 1)
		{
			ft_putchar(x, 'A', 'B', 'C');
			write (1, "\n", 1);
		}
	}
}
