/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:52:51 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/13 23:29:00 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	print_decimal(t_print *tab, int fd)
{
	char	*value;
	int	i;

	value = ft_itoa_base(va_arg(tab->args, unsigned int), "0123456789");
	i = -1;
	while (++i < tab->width - ft_strlen(value))
		ft_putchar_fd(' ', fd);
	ft_putstr_fd(value, fd);
}
