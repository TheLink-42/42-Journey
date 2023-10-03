/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_perc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:53:57 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 15:12:31 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_perc(t_print *tab, int fd)
{
	int	i;

	i = -1;
	while (++i < tab->width - 1)
		ft_putchar_fd(' ', fd);
	ft_putchar_fd('%', fd);
	tab->count += i + 1;
}
