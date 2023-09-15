/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:29:26 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/17 19:39:09 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 0)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				write (1, &argv[i][j], 1);
				j++;
			}
			j = 0;
			i++;
			write (1, "\n", 1);
		}
	}
	return (0);
}
