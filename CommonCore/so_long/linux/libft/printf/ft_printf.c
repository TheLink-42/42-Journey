/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:38:16 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/20 15:10:48 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_print	*init_tab(t_print *tab)
{
	tab->width = 0;
	tab->len = 0;
	tab->count = 0;
	return (tab);
}

static void	strat_create(t_strat *strat_method)
{
	strat_method['d'] = (t_strat){.execute = print_integer};
	strat_method['i'] = (t_strat){.execute = print_integer};
	strat_method['u'] = (t_strat){.execute = print_decimal};
	strat_method['o'] = (t_strat){.execute = print_octal};
	strat_method['x'] = (t_strat){.execute = print_hexalow};
	strat_method['X'] = (t_strat){.execute = print_hexaup};
	strat_method['c'] = (t_strat){.execute = print_char};
	strat_method['s'] = (t_strat){.execute = print_string};
	strat_method['p'] = (t_strat){.execute = print_ptr};
	strat_method['%'] = (t_strat){.execute = print_perc};
}

static int	check_format(t_print *tab, const char *format,
int pos, t_strat *strat_method)
{
	int		nbr;
	t_strat	strategy;

	tab->len = 0;
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
