/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:52:51 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 15:11:32 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_decimal(t_print *tab, int fd)
{
	char	*value;
	int		i;
	int		n;

	value = ft_itoa_base(va_arg(tab->args, unsigned int), "0123456789");
	n = (int)ft_strlen(value);
	i = -1;
	while (++i < tab->width - n)
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
	tab->count += n + i;
	free(value);
}
