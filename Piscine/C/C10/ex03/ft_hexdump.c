/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:48:26 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 17:48:32 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFF_SIZE 16

int	ft_strlen(char *str);

void	print_hex_byte(unsigned char byte)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	write(1, &hex_chars[byte / 16], 1);
	write(1, &hex_chars[byte % 16], 1);
}

void	print_address(int address)
{
	char	addr_str[9];
	int		i;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	addr_str[8] = '\0';
	i = 7;
	while (i >= 0)
	{
		addr_str[i] = hex_digits[address & 0xF];
		address >>= 4;
		i--;
	}
	write(1, addr_str, 8);
}

void	print_line_content(unsigned char *buffer, int bytes_read)
{
	int	i;

	i = -1;
	while (++i < BUFF_SIZE)
	{
		if (i < bytes_read)
		{
			print_hex_byte(buffer[i]);
			write (1, " ", 1);
		}
		else
			write (1, "   ", 3);
	}
}

void	ft_hexdump(char *file_name)
{
	int				fd;
	unsigned char	buffer[BUFF_SIZE];
	int				bytes_read;
	int				address;

	address = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file.", 18);
		return ;
	}
	bytes_read = read(fd, buffer, BUFF_SIZE);
	while (bytes_read > 0)
	{
		print_address(address);
		print_line_content(buffer, bytes_read);
		write(1, "\n", 1);
		address += bytes_read;
		bytes_read = read(fd, buffer, BUFF_SIZE);
	}
	if (bytes_read == -1)
		write(2, strerror(errno), ft_strlen(strerror(errno)));
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2, "Usage: ./ft_hexdump <file_name>\n", 33);
		return (1);
	}
	ft_hexdump(argv[1]);
	return (0);
}
