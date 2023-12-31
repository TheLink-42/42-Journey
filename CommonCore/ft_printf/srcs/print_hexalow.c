/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:06:58 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/15 16:11:04 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

void	print_hexalow(t_print *tab, int fd)
{
	char	*value;
	int		i;
	int		n;

	value = ft_itoa_base(va_arg(tab->args, unsigned int), "0123456789abcdef");
	n = (int)ft_strlen(value);
	i = -1;
	while (++i < tab->width - n)
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
	tab->count += n + i;
	free(value);
}
