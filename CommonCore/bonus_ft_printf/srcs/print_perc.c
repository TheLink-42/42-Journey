/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_perc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:53:57 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/14 00:37:29 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

void	print_perc(t_print *tab, int fd)
{
	int	i;

	i = -1;
	while (++i < tab->width - 1)
		ft_putchar_fd(' ', fd);
	ft_putchar_fd('%', fd);
}
