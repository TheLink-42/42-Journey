/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexaup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:06:58 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 15:11:54 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexaup(t_print *tab, int fd)
{
	char	*value;
	int		i;
	int		n;

	value = ft_itoa_base(va_arg(tab->args, unsigned int), "0123456789ABCDEF");
	n = (int)ft_strlen(value);
	i = -1;
	while (++i < tab->width - n)
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
	tab->count += n + i;
	free(value);
}
