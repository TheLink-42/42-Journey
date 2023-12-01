/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:23:36 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 18:39:54 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/main.hpp"

//Constructor
Phonebook::Phonebook()
{

}

//Destructor
Phonebook::~Phonebook()
{

}



//Creator og contact
void	Phonebook::create_contact(int pos, std::string first_name, std::string last_name,
								std::string nickname, std::string phone_number,
								std::string darkest_secret)
{
	_phonebook[pos].set_first_name(first_name);
	_phonebook[pos].set_last_name(last_name);
	_phonebook[pos].set_nickname(nickname);
	_phonebook[pos].set_phone_number(phone_number);
	_phonebook[pos].set_darkest_secret(darkest_secret);
}



//Getters
Contact 		Phonebook::get_contact(int pos)
{
	return (_phonebook[pos]);
}

std::string		Phonebook::get_first_name(int pos)
{
	return (_phonebook[pos].get_first_name());
}

std::string		Phonebook::get_last_name(int pos)
{
	return (_phonebook[pos].get_last_name());
}

std::string		Phonebook::get_nickname(int pos)
{
	return (_phonebook[pos].get_nickname());
}

std::string		Phonebook::get_phone_number(int pos)
{
	return (_phonebook[pos].get_phone_number());
}

std::string		Phonebook::get_darkest_secret(int pos)
{
	return (_phonebook[pos].get_darkest_secret());
}