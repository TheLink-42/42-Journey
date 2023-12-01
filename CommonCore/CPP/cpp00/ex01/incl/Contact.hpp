/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:25:13 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 14:10:00 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class Contact
{
	private:
		//Attributes of each contact
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string	_phone_number;
		std::string _darkest_secret;

	public:
		//Constructor
		Contact();
		
		//Destructor
		~Contact();

		//Getters
		std::string		get_first_name() const;
		std::string		get_last_name() const;
		std::string		get_nickname() const;
		std::string		get_phone_number() const;
		std::string		get_darkest_secret() const;

		//Setters
		void			set_first_name(std::string first_name);
		void			set_last_name(std::string last_name);
		void			set_nickname(std::string nickname);
		void			set_phone_number(std::string phone_number);
		void			set_darkest_secret(std::string darkest_secret);

		//Functions
		void			ft_print(void) const;

};

#endif