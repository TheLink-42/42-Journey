/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:17:32 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/27 23:32:48 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*find_node(t_node **head, unsigned int num);

void	p_decenas(unsigned int num, t_node **head)
{
	if (num <= 20)
	{
		ft_putstr(find_node(head, num));
	}
	else if (num < 100)
	{
		ft_putstr(find_node(head, (num / 10) * 10));
		if (num % 10 != 0)
		{
			write (1, " ", 1);
			ft_putstr(find_node(head, num % 10));
		}
	}
}

void	p_centenas(unsigned int num, t_node **head)
{
	if (num < 100)
		p_decenas(num, head);
	else
	{
		ft_putstr(find_node(head, num / 100));
		write (1, " ", 1);
		ft_putstr(find_node(head, 100));
		if (num % 100 != 0)
		{
			write (1, " and ", 5);
			num = num % 100;
			p_decenas(num, head);
		}
	}
}

void	p_miles(unsigned int num, t_node **head)
{
	if (num < 1000)
		p_centenas(num, head);
	else
	{
		p_centenas(num / 1000, head);
		write (1, " ", 1);
		ft_putstr(find_node(head, 1000));
		if (num % 1000 != 0)
			write (1, " ", 1);
		if (num % 1000 < 100 && num % 1000 > 0)
			write (1, "and ", 4);
		if (num % 1000 != 0)
			p_centenas(num % 1000, head);
	}
}

void	p_millones(unsigned int num, t_node **head)
{
	if (num < 1000000)
		p_miles(num, head);
	else
	{
		p_centenas(num / 1000000, head);
		write (1, " ", 1);
		ft_putstr(find_node(head, 1000000));
		if (num % 1000000 != 0)
			write (1, " ", 1);
		if (num % 1000 < 100 && num % 1000 > 0)
			write (1, "and ", 4);
		if (num % 1000000 != 0)
			p_miles(num % 1000000, head);
	}
}

void	p_billion(unsigned int num, t_node **head)
{
	if (num < 1000000000)
		p_millones(num, head);
	else
	{
		p_centenas(num / 1000000000, head);
		write (1, " ", 1);
		ft_putstr(find_node(head, 1000000000));
		if (num % 1000000000 != 0)
			write (1, " ", 1);
		if (num % 1000 < 100 && num % 1000 > 0)
			write (1, "and ", 4);
		if (num % 1000000000 != 0)
			p_millones(num % 1000000000, head);
	}
}
