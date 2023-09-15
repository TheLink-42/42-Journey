/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:02:44 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 12:02:51 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

int	ft_str_is_numeric(char *str)
{
	int	result;
	int	position;

	result = 1;
	position = 0;
	while (str[position] && result == 1)
	{
		if (str[position] >= '0' && str[position] <= '9')
			result = 1;
		else
			result = 0;
		position++;
	}
	return (result);
}

int	get_initial(char **args, int *is_c, int *num, int na)
{
	int	i;

	i = 1;
	*is_c = 0;
	*num = 10;
	if (args[i][0] == '-' && args[i][1] == 'c' && na > 2)
	{
		*is_c = 1;
		if (args[i++][2] == '\0' && na > 3)
		{
			if (ft_str_is_numeric(args[i]))
				*num = ft_atoi(args[i]);
			else
				*num = -1;
		}
		else
		{
			if (ft_str_is_numeric(args[i] + 2))
				*num = ft_atoi(args[i] + 2);
			else
				*num = -1;
		}
		i++;
	}
	return (i);
}

void	ft_print(int na, char **args, int i, int init)
{
	if (na != (init + 1))
	{
		if (i >= (init + 1))
			write(1, "\n", 1);
		write(1, "==> ", 4);
		write(1, basename(args[i]), ft_strlen(basename(args[i])));
		write(1, " <==\n", 5);
	}
}

void	zero_args(char **argv)
{
	char	buff;

	while (read(0, &buff, 1) != 0)
	{	
		if (errno)
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": stdin: ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
			return ;
		}
	}
}

int	main(int na, char **args)
{
	int	i;
	int	num;
	int	is_c;
	int	init;

	if (na == 1)
		zero_args(args);
	else
	{
		init = get_initial(args, &is_c, &num, na);
		if (num == -1)
			write(2, "usage: ft_tail -c # [file ...]\n", 31);
		else
		{
			i = init;
			while (i < na)
			{
				ft_print(na, args, i, init);
				read_file(args[i], count_lines(args[i], is_c) - num, is_c);
				i++;
			}		
		}
	}
	return (0);
}
