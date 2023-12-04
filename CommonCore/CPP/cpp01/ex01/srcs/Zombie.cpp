/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:29:11 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 14:19:30 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"


Zombie::Zombie( std::string name)
{
	setName( name );
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

void			Zombie::setName( std::string name )
{
	_name = name;
}


void			Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}