/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:09:17 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/11 13:09:17 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

typedef struct s_print
{
	void	(*execute)(va_list args, int fd);
}	t_print;

int	ft_printf(const char *format, ...);

void	print_char(va_list args, int fd);
void	print_decimal(va_list args, int fd);
void	print_hexalow(va_list args, int fd);
void	print_hexaup(va_list args, int fd);
void	print_integer(va_list args, int fd);
void	print_octal(va_list args, int fd);
void	print_ptr(va_list args, int fd);
void	print_string(va_list args, int fd);

#endif
