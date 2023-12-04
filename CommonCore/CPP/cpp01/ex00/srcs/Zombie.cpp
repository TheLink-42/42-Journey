/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:29:11 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/02 17:30:52 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"


Zombie::Zombie( std::string name)
{
	_name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << getName() << " is dead again." << std::endl;
}


std::string		Zombie::getName( void )
{
	return (_name);
}


void			Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}