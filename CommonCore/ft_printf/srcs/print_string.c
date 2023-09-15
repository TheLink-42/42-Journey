/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:28:41 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/15 16:15:32 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

void	print_string(t_print *tab, int fd)
{
	char	*value;
	int		i;
	int		n;

	i = 0;
	value = va_arg(tab->args, char *);
	if (value == NULL)
	{
		ft_putstr_fd("(null)", fd);
		tab->count += 6;
		return ;
	}
	n = (int)ft_strlen(value);
	while (i < tab->width - n)
	{
		ft_putchar_fd(' ', fd);
		i++;
	}
	ft_putstr_fd(value, fd);
	tab->count += n + i;
}
