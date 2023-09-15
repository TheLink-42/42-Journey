/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:29:38 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/11 10:33:12 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer1;
	int	buffer2;

	buffer1 = *a;
	buffer2 = *b;
	*a = buffer1 / buffer2;
	*b = buffer1 % buffer2;
}
