/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:28:41 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/14 00:51:09 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/ft_printf.h"

void	print_string(t_print *tab, int fd)
{
	char	*value;
//	int	i;
	(void)fd;
//	i = 0;
	value = va_arg(tab->args, char *);
	printf("%s\n", value);
//	while (i < tab->width - (int)ft_strlen(value))
//	{
//		ft_putchar_fd(' ', fd);
//		i++;
//	}
//	ft_putstr_fd("Hola Mundo", fd);
}
