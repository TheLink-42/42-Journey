/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:52:33 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 13:51:06 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

	/*
	Calling the constructor without the keyword 'new', saves the object in the
	stack memory. This object will be accesible as long as the execution of the
	function where it has been called has not terminated. When the function reaches
	it´s end, the object will be destroyed through its destructor automatically.
	*/

void	randomChump( std::string name )
{
	Zombie gregory = Zombie( name );
	gregory.announce();
}
