/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionZombies.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:06:34 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 14:15:22 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

void	ftAnnounceZombies( int n , Zombie* horde )
{
	for (int i = 0; i < n; i++)
		horde[i].announce();
}
