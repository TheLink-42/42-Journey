/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:05:06 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/11/06 14:54:52 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

t_print	*init_tab(t_print *tab)
{
	tab->width = 0;
	tab->len = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->prec = 0;
	tab->hash = 0;
	tab->space = 0;
	tab->cross = 0;
	return (tab);
}

void	strat_create(t_strat *strat_method)
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