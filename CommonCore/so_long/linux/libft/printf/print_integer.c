/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:38:33 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 15:12:04 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_integer(t_print *tab, int fd)
{
	char	*value;
	int		i;
	int		n;

	value = ft_itoa(va_arg(tab->args, int));
	n = (int)ft_strlen(value);
	i = -1;
	while (++i < tab->width - n)
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
	tab->count += n + i;
	free(value);
}
