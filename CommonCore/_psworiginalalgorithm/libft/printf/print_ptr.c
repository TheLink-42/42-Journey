/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:03:08 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/20 15:12:44 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_zero(t_print *tab, char *o_value, int fd)
{
	size_t	i;

	i = 0;
	while (o_value[i] == '0')
		i++;
	if (!o_value[i])
	{
		ft_putstr_fd("(nil)", fd);
		tab->count += 5;
		free(o_value);
		return (0);
	}
	return (1);
}

void	print_ptr(t_print *tab, int fd)
{
	char	*value;
	char	*o_value;
	int		i;
	int		n;

	o_value = ft_putptr(va_arg(tab->args, unsigned long));
	if (!is_zero(tab, o_value, fd))
		return ;
	i = 0;
	while (o_value[i] == '0')
		i++;
	value = &o_value[i];
	n = (int)ft_strlen(value);
	i = 1;
	while (++i < tab->width - n)
		ft_putchar_fd(' ', fd);
	ft_putstr_fd("0x", fd);
	ft_putstr_fd(value, fd);
	tab->count += n + i;
	free(o_value);
}
