/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:38:16 by jimmy             #+#    #+#             */
/*   Updated: 2023/11/06 14:59:57 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

static void	read_flags(t_print *tab, const char *format, int *pos)
{
	int	i;

	i = *pos;
	if (format[i] == '-')
		tab->dash = 1;
	if (format[i] == '0')
		tab->zero = 1;
	if (format[i] == '.')
		tab->prec = 1;
	if (format[i] == '#')
		tab->hash = 1;
	if (format[i] == ' ')
		tab->space = 1;
	if (format[i] == '+')
		tab->cross = 1;
	i++;
	*pos = i;
}

static int	check_format(t_print *tab, const char *format,
int pos, t_strat *strat_method)
{
	int		nbr;
	t_strat	strategy;

	while (format[pos] < '1' || format[pos] > '9')
		read_flags(tab, format, &pos);
	nbr = ft_atoi(&format[pos]);
	tab->width = nbr;
	if (nbr > 0)
	{
		tab->len++;
		while (nbr > 9)
		{
			tab->len++;
			nbr /= 10;
		}
	}
	strategy = strat_method[(int)format[pos + tab->len]];
	if (strategy.execute)
		strategy.execute(tab, 1);
	else
		ft_putchar_fd((unsigned int)format[pos + tab->len], 1);
	return (pos + tab->len);
}

static void	send_print(t_print *tab, const char *format,
		t_strat *strat_method, int *i)
{
	int	pos;

	pos = *i;
	if (format[pos] == '%')
		*i = check_format(tab, format, pos + 1, strat_method);
	else
	{
		ft_putchar_fd(format[pos], 1);
		tab->count++;
	}
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;
	t_strat	*strat_method;

	strat_method = ft_calloc(128, sizeof(t_strat));
	if (!strat_method)
		return (-1);
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
	{
		free(strat_method);
		return (-1);
	}
	tab->count = 0;
	strat_create(strat_method);
	init_tab(tab);
	va_start(tab->args, format);
	i = -1;
	while (format[++i])
		send_print(tab, format, strat_method, &i);
	va_end(tab->args);
	ret = tab->count;
	free(tab);
	free(strat_method);
	return (ret);
}
