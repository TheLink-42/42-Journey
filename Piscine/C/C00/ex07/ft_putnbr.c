/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:16:53 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/10 17:59:16 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putnbr(int nb)
{
	int length;
	int number;

	length = 1;
	number = nb;
	while (number >= 10)
	{
		number = number/10;
		length++;
	}
	write (1, &(char){nb + '0'}, length);
}
