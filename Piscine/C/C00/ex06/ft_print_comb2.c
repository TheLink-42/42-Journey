/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:47:15 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/10 20:03:24 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			write (1, &(char){first / 10 + '0'}, 1);
			write (1, &(char){first % 10 + '0'}, 1);
			write (1, " ", 1);
			write (1, &(char){second / 10 + '0'}, 1);
			write (1, &(char){second % 10 + '0'}, 1);
			if (first != 98)
				write (1, ", ", 2);
			second++;
		}
		first++;
	}
}
