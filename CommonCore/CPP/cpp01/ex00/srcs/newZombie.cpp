/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:48:35 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 13:51:02 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

	/*
	Creating an object through the keyword 'new' allocates it on the heap memory
	(as a malloc on C), and, as far as it is reachable, you can use it in other
	functions and must use the destructor when you are done with it.
	*/

Zombie*		newZombie ( std::string name)
{
	return (new Zombie(name));
}
