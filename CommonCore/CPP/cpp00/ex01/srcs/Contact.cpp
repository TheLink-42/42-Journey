/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:24:27 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 14:12:25 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/main.hpp"

//Constructors and destructors
Contact::Contact()
{

}

Contact::~Contact()
{

}



//Print info
void	Contact::ft_print(void) const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}



//Setters
void	Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
}
void	Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
}
void	Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}
void	Contact::set_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
}
void	Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}



//Getters

std::string		Contact::get_first_name() const
{
	return (_first_name);
}
std::string		Contact::get_last_name() const
{
	return (_last_name);
}
std::string		Contact::get_nickname() const
{
	return (_nickname);
}
std::string		Contact::get_phone_number() const
{
	return (_phone_number);
}
std::string		Contact::get_darkest_secret() const
{
	return (_darkest_secret);
}