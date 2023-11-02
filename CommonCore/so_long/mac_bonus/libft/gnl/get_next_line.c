/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:00:12 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 20:02:29 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*custom_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*free_stored_line(char *fd_storage)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	ptr = gnl_strchr(fd_storage, '\n');
	if (!ptr)
	{
		new_storage = NULL;
		return (custom_free(&fd_storage));
	}
	else
		len = ptr - fd_storage + 1;
	if (!fd_storage[len])
		return (custom_free(&fd_storage));
	new_storage = gnl_substr(fd_storage, len, ft_strlen(fd_storage) - len);
	custom_free(&fd_storage);
	if (!new_storage)
		return (NULL);
	return (new_storage);
}

char	*ft_get_line(char *fd_storage)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = gnl_strchr(fd_storage, '\n');
	if (!ptr)
		len = (int)ft_strlen(fd_storage);
	else
		len = ptr - fd_storage + 1;
	line = gnl_substr(fd_storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_file(int fd, char *fd_storage)
{
	int		bytes_read;
	char	*buffer;

	bytes_read = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (custom_free(&fd_storage));
	buffer[0] = '\0';
	while (bytes_read > 0 && !gnl_strchr(fd_storage, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buffer[bytes_read] = '\0';
			fd_storage = gnl_strjoin(fd_storage, buffer);
		}
	}
	free(buffer);
	if (bytes_read == -1)
		return (custom_free(&fd_storage));
	return (fd_storage);
}

char	*get_next_line(int fd)
{
	static char	*fd_storage;
	char		*line;

	if (fd < 0)
		return (NULL);
	if (!fd_storage || !gnl_strchr(fd_storage, '\n'))
		fd_storage = read_file(fd, fd_storage);
	if (!fd_storage)
		return (NULL);
	line = ft_get_line(fd_storage);
	if (!line)
		return (custom_free(&fd_storage));
	fd_storage = free_stored_line(fd_storage);
	return (line);
}
