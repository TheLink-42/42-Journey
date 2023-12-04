/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:03:08 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 15:06:46 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon( std::string type );
		~Weapon();
		
		std::string	getType( void ) const;
		void		setType( std::string type );
};

#endif
