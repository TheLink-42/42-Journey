/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:10:02 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/11 13:10:02 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"
#include "libprintf.h"

void	print_ptr(va_list args, int fd)
{
	void	*value;

	value = va_arg(args, void *);
	ft_putptr_fd(value, fd);
}
