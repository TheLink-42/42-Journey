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

int		ft_strlen(char *str);
void	ft_error(char *name, char *msg);
int		count_lines(char *name, int no_lines);
void	read_file(char *name, int m, int no_lines);
int		ft_atoi(char *str);

int		ft_str_is_numeric(char *str);
int		get_initial(char **args, int *is_c, int *num, int na);
void	ft_print(int na, char **args, int i, int init);
void	ft_putchar(char c, int out);
void	ft_putstr(char *str, int out);

#endif
