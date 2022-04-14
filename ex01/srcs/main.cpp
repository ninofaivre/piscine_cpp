/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:48:25 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/14 03:24:51 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

#define HELP "# [ADD] : add a contact | [SEARCH] : search for a contact | [CLEAR] : clear the terminal | [HELP] : display this help | [EXIT] : exit #"

int	main()
{
	std::string	buffer;
	PhoneBook 	phone;

	std::cout << HELP << std::endl;
	while (buffer.compare("EXIT"))
	{
		std::cout << "> ";
		std::getline(std::cin, buffer);
		if (!buffer.compare("ADD"))
			phone.add();
		else if (!buffer.compare("SEARCH"))
			phone.search();
		else if (!buffer.compare("CLEAR"))
			std::cout << "\x1B[2J\x1B[H";
		else if (!buffer.compare("HELP"))
			std::cout << HELP << std::endl;
		else if (buffer.compare("EXIT") && buffer.length())
			std::cout << "! Not a valid command !" << std::endl;
	}
	std::cout << "# GOODBYE #" << std::endl;
	return (0);
}
