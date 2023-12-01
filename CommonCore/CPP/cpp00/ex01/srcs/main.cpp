/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:36:16 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 19:33:28 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/main.hpp"


void	ft_add(Phonebook *phonebook, int pos)
{
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;

	std::cout << "Please complete the following information:" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);

	(*phonebook).create_contact(pos, first_name, last_name, nickname, phone_number, darkest_secret);

	std::cout << "New contact added to the Phonebook succesfully.\n" << std::endl;
}

void	ft_search(Phonebook *phonebook, int size)
{
	int				pos;
	std::string		index;
	std::string		first;
	std::string		last;
	std::string		nick;

	if (!size)
	{
		std::cout << "No contacts registered. \n" << std::endl;
		return ;
	}
	std::cout << "Which contact do you want to see?\n" << std::endl;
	std::cout << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" << "|"<< std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << std::endl;
	for (int i = 0; i < size; i++)
	{
		first = (*phonebook).get_first_name(i);
		last = (*phonebook).get_last_name(i);
		nick = (*phonebook).get_nickname(i);

		if (first.length() > 9)
		{
			first.resize(9);
			first.resize(10, '.');
		}
		if (last.length() > 9)
		{
			last.resize(9);
			last.resize(10, '.');
		}
		if (nick.length() > 9)
		{
			nick.resize(9);
			nick.resize(10, '.');
		}
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << first << "|"<< std::setw(10) << last << "|" << std::setw(10) << nick << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Please, enter contact index to see detailed information." << std::endl;
	std::getline(std::cin, index);
	pos = stoi(index);
	if (pos < 1 || pos > size)
		std::cout << "INVALID INDEX\n" << std::endl;
	else
	{
		std::cout << std::endl;
		(*phonebook).get_contact(pos - 1).ft_print();
		std::cout << std::endl;
	}
}

int main(void)
{
	std::string		action;
	Phonebook		phonebook;
	int				pos;
	int				size;

	pos = 0;
	size = 0;
	while (!std::cin.eof())
	{
		std::cout << "Please enter a command. (SEARCH // ADD // EXIT)" << std::endl;
		std::getline(std::cin, action);
		if (action == "EXIT")
			return (0);
		else if (action == "ADD")
		{
			if (pos < 2)
				pos++;
			else
				pos = 1;
			if (size < 2)
				size++;
			ft_add(&phonebook, pos - 1);
		}
		else if (action == "SEARCH")
		{
			ft_search(&phonebook, size);
		}
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}