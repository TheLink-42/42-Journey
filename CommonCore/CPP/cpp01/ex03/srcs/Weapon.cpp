/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:39:24 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 15:09:18 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon( std::string type )
{
	setType( type );
}

Weapon::~Weapon()
{

}



std::string		Weapon::getType() const
{
	return(_type);
}

std::string		Weapon::setType( std::string type )
{
	_type = type;
}
