/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:30:37 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 10:43:12 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>

void	ft_putchar(char c, int out);
void	ft_putstr(char *str, int out);
int		ft_read(char *file_path);
void	zero_args(char **argv);

#endif
