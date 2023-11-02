/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:53:57 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 15:11:16 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(t_print *tab, int fd)
{
	unsigned int	value;
	int				i;

	value = va_arg(tab->args, int);
	i = -1;
	while (++i < tab->width - 1)
		ft_putchar_fd(' ', fd);
	ft_putchar_fd(value, fd);
	tab->count += i + 1;
}
