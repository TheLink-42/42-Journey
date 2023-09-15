/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:52:06 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 10:44:04 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		zero_args(argv);
	else
	{
		i = 0;
		while (++i < argc)
		{
			if (!ft_read(argv[i]))
			{
				ft_putstr(basename(argv[0]), 2);
				ft_putstr(": ", 2);
				ft_putstr(argv[i], 2);
				ft_putstr(": ", 2);
				ft_putstr(strerror(errno), 2);
				ft_putchar('\n', 2);
			}
		}
	}
	return (0);
}
