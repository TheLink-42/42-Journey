/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:06:58 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/14 00:16:12 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

void	print_hexalow(t_print *tab, int fd)
{
	char	*value;
	int		i;

	value = ft_itoa_base(va_arg(tab->args, unsigned int), "0123456789abcdef");
	i = -1;
	while (++i < tab->width - (int)ft_strlen(value))
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
}
