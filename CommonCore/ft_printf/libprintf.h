/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:24:46 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/08 11:24:46 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>

typedef struct s_print
{
	void	(*execute)(va_list args, int fd);
}	t_print;

int		ft_printf(const char *format, ...);

void	print_char(va_list args, int fd);
void	print_decimal(va_list args, int fd);
void	print_hexalow(va_list args, int fd);
void	print_hexaup(va_list args, int fd);
void	print_integer(va_list args, int fd);
void	print_octal(va_list args, int fd);
void	print_ptr(va_list args, int fd);
void	print_string(va_list args, int fd);

#endif