/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:10:25 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 22:56:02 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon;

	public:
		HumanA();
		HumanA( std::string name , Weapon weapon );
		~HumanA();

		void	setName( std::string name );
		void	setWeapon( Weapon weapon );

		std::string	getName( void ) const;
		Weapon		getWeapon( void ) const;

		void	attack( void );
};

#endif;
