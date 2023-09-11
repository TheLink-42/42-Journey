/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:09:27 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/11 13:09:27 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"
#include "libprintf.h"

void	print_char(va_list args, int fd)
{
	int	value;

	value = va_arg(args, int);
	ft_putchar_fd(value, fd);
}
