/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:07:32 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/12 15:04:44 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	*inicio;
	int	*siguiente;
	int	temp;

	inicio = tab;
	while (size > 0)
	{
		siguiente = inicio + 1;
		if (*inicio > *siguiente)
		{
			temp = *inicio;
			*inicio = *siguiente;
			*siguiente = temp;
		}
		inicio++;
		size--;
	}
}
