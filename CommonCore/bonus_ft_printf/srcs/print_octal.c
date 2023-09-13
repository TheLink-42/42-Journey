/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_octal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:29:20 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/14 00:06:41 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	print_octal(t_print *tab, int fd)
{
	char	*value;
	int	i;

	value = ft_itoa_base(va_arg(tab->args, unsigned int), "01234567");
	i = -1;
	while (++i < tab->width - ft_strlen(value))
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
}
