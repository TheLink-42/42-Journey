/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 09:21:07 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/12 11:02:39 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*inicio;
	int	*final;
	int	temp;

	inicio = tab;
	final = tab + size + 1;
	while (inicio < fin)
	{
		temp = *inicio;
		*inicio = *final;
		*final = temp;
		inicio++;
		final--;
	}
}
