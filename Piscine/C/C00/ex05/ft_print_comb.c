/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:22:26 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/10 20:00:19 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	primero;
	int	segundo;
	int	tercero;

	primero = '0';
	while (primero < '8')
	{
		segundo = primero + 1;
		while (segundo < '9')
		{
			tercero = segundo + 1;
			while (tercero <= '9')
			{
				write (1, &primero, 1);
				write (1, &segundo, 1);
				write (1, &tercero, 1);
				tercero++;
				if (primero != '7')
					write (1, ", ", 2);
			}						
			segundo++;
		}
		primero++;
	}
}
