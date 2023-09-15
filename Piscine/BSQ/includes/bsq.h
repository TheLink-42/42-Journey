/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:12:04 by mbelmont          #+#    #+#             */
/*   Updated: 2023/08/29 18:36:14 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# define ERROR -1
# define FILENAME "auxfile.txt"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_board
{
	int		**board;
	int		cols;
	int		rows;
	char	obstacle;
	char	empty;
	char	full;
	int		i;
}	t_board;

// uti.c
void	ft_putchar(char c, int n);
void	ft_putstr(char *str, int is_error);
int		ft_strlen(char *str);
int		ft_atoi(char *str, int *res);

// uti2.c
int		read_line(int fd, char *buf, int read_extra);
int		min(int a, int b, int c);
void	free_board(t_board *board);
void	mem_board(t_board *board);

// algorithm.c
int		algorithm(t_board *board);
int		print_board(t_board *board, int max, int pos);
void	print_aux(t_board *board, int *pos, int max, int *flag);
int		do_sides(t_board *board);

// check.c
int		set_symbols(char one, char two, char three, t_board *board);
int		check_line(char *str, int *nline, t_board *board);
int		check_col(int size, int new_size);
int		set_symbols2(char one, char two, char three);

// create_tab.c
int		fill_board(t_board *board, char *buffer, int fd);
int		create_board(char *file, t_board *board);

// main.c
void	read_sq(void);
void	do_board(char *name);

#endif
