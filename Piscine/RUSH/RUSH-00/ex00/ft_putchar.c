/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:12:25 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/12 15:40:50 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int size, char fir, char sec, char thi)
{
	write (1, &fir, 1);
	while (size > 2)
	{
		write (1, &sec, 1);
		size--;
	}
	if (size > 1)
		write (1, &thi, 1);
}
