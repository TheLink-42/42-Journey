/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:08:08 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/17 19:54:20 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i])
		{
			write (1, &argv[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
