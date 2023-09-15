/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 05:43:21 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 10:41:10 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

void	ft_putchar(char c, int o)
{
	write (o, &c, 1);
}

int	ft_strlen(char *str)
{
	int		len;
	char	*aux;

	len = 0;
	aux = str;
	while (*aux)
	{
		len++;
		aux++;
	}
	return (len);
}

void	ft_putstr(char *str, int out, int len)
{
	int	i;

	if (!len)
		len = ft_strlen(str);
	i = -1;
	while (++i < len)
		ft_putchar(str[i], out);
}

void	ft_read(char *file_path)
{
	int		file;
	char	buff[2];

	file = open(file_path, O_RDWR);
	if (file != -1)
	{
		while (read(file, buff, 1) != 0)
			ft_putchar(buff[0], 1);
	}
	else
		ft_putstr("Cannot read file.\n", 2, 0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2, 0);
	else if (argc != 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	else
		ft_read(argv[1]);
}
