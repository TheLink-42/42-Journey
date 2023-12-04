/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:44:31 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 13:43:45 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

int	main( void )
{
	std::cout << "Heap Zombie is being revived from the dead." << std::endl;
	Zombie	*heapZombie = newZombie("Heap Zombie");
	std::cout << "Heap Zombie has been revived. He will announce itself soon." << std::endl;
	(*heapZombie).announce();
	std::cout << "Stack Zombie is being revived from the dead." << std::endl;
	randomChump("Stack Zombie");
	std::cout << "Stack Zombie did not last long." << std::endl;
	std::cout << "Time has come for Heap Zombie." << std::endl;
	delete heapZombie;
	return (0);
}
