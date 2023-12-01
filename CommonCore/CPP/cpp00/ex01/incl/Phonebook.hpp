/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:59:45 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 14:30:51 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class Phonebook
{
	private:
		//Attributes
		Contact _phonebook[8];

	public:
		//Constructor
		Phonebook();

		//Destructor
		~Phonebook();


		//Creator of contact
		void	create_contact(int pos, std::string first_name, std::string last_name,
								std::string nickname, std::string phone_number,
								std::string darkest_secret);
		

		//Getters
		Contact			get_contact(int pos);
		std::string		get_first_name(int pos);
		std::string		get_last_name(int pos);
		std::string		get_nickname(int pos);
		std::string		get_phone_number(int pos);
		std::string		get_darkest_secret(int pos);
};

#endif