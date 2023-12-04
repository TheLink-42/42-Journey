/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:09:58 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 22:58:29 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA( std::string name , Weapon weapon )
{
	setName( name );
	setWeapon( wapon );
}

HumanA::~HumanA()
{

}

void	HumanA::setName( std::string name )
{
	_name = name;
}

void	HumanA::setWeapon( Weapon weapon )
{
	_weapon = weapon;
}




