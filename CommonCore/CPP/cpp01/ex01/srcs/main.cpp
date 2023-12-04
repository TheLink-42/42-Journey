/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:44:31 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 14:21:04 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

int	main( void )
{
	std::string		numberOfZombies;
	std::string		nameOfZombies;
	int				nbZombies;

	std::cout << "Let´s create a zombie horde.\nHow many zombie do you want?" << std::endl;
	std::getline( std::cin , numberOfZombies );
	std::cout << "Let´s give them a name." << std::endl;
	std::getline( std::cin , nameOfZombies );
	nbZombies = stoi( numberOfZombies );
	Zombie*	horde = zombieHorde( nbZombies , nameOfZombies );
	std::cout << "They will announce themselves." << std::endl;
	ftAnnounceZombies( nbZombies , horde );
	std::cout << "Time is over for them." << std::endl;
	delete [] horde;
	return (0);
}
