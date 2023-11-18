/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:00:12 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/13 16:18:17 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

	ptr = ft_strchr(fd_storage, '\n');
	if (!ptr)
	{
		new_storage = NULL;
		return (custom_free(&fd_storage));
	}
	else
		len = ptr - fd_storage + 1;
	if (!fd_storage[len])
		return (custom_free(&fd_storage));
	new_storage = ft_substr(fd_storage, len, ft_strlen(fd_storage) - len);
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

	ptr = ft_strchr(fd_storage, '\n');
	if (!ptr)
		len = (int)ft_strlen(fd_storage);
	else
		len = ptr - fd_storage + 1;
	line = ft_substr(fd_storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_file(int fd, char *fd_storage)
{
	int		bytes_read;
	char	buffer[BUFFER_SIZE + 1];

	bytes_read = 1;
	buffer[0] = '\0';
	while (bytes_read > 0 && !ft_strchr(fd_storage, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buffer[bytes_read] = '\0';
			fd_storage = ft_strjoin(fd_storage, buffer);
		}
	}
	if (bytes_read == -1)
		return (custom_free(&fd_storage));
	return (fd_storage);
}

char	*get_next_line(int fd)
{
	static char	*fd_storage[FD_SETSIZE];
	char		*line;

	if (fd < 0 || fd > FD_SETSIZE)
		return (NULL);
	if (!fd_storage[fd] || !ft_strchr(fd_storage[fd], '\n'))
		fd_storage[fd] = read_file(fd, fd_storage[fd]);
	if (!fd_storage[fd])
		return (NULL);
	line = ft_get_line(fd_storage[fd]);
	if (!line)
		return (custom_free(&fd_storage[fd]));
	fd_storage[fd] = free_stored_line(fd_storage[fd]);
	return (line);
}
