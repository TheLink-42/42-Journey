/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:35:06 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/14 00:30:48 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef struct s_print
{
	va_list	args;
	int		width;
	int		len;
}	t_print;

typedef struct s_strat
{
	void	(*execute)(t_print *tab, int fd);
}	t_strat;

int		ft_printf(const char *format, ...);

void	print_char(t_print *tab, int fd);
void	print_string(t_print *tab, int fd);
void	print_decimal(t_print *tab, int fd);
void	print_hexalow(t_print *tab, int fd);
void	print_integer(t_print *tab, int fd);
void	print_octal(t_print *tab, int fd);
void	print_hexaup(t_print *tab, int fd);
void	print_ptr(t_print *tab, int fd);
void	print_perc(t_print *tab, int fd);

#endif
