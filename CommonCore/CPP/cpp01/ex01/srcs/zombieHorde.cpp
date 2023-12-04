/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:59:40 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 14:19:51 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie*		zombieHorde( int n , std::string name )
{
	Zombie*	horde = new Zombie[n];
	for(int i = 0; i < n; i++)
		horde[i].setName(name);
	return (&horde[0]);
}
