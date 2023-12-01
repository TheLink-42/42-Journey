/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:02:40 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/12/01 13:18:00 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string	no_args = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string	current_arg;

	if (argc == 1)
		std::cout << no_args;
	else
		for (int i = 1; i < argc; i++)
		{
			current_arg = argv[i];
			int		len = current_arg.length();
			for (int j = 0; j < len; j++)
				std::cout << (char)(toupper(current_arg[j]));
		}
	std::cout << std::endl;
	return (0);
}