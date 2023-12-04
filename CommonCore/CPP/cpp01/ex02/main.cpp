/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:26:09 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/04 14:34:26 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main( void )
{
	std::string s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "MEMORY ADDRESS" << std::endl;
	std::cout << "String: " << &s << std::endl;
	std::cout << "StringPTR: " << stringPTR << std::endl;
	std::cout << "StringREF: " << &stringREF << std::endl;

	std::cout << "\nVALUE" << std::endl;
	std::cout << "String: " << s << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;

	return (0);	
}