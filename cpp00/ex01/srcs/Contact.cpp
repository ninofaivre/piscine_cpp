/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:38:56 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/07 23:07:03 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

const int			Contact::preview_column_width = 10;

const std::string	Contact::fields_name[5] =
{
	("first name"),
	("last name"),
	("nickname"),
	("phone number"),
	("darkest secret")
};

Contact::Contact(void)
: index(0)
{
}

Contact::~Contact(void)
{
}

void	Contact::set_fields_value(void)
{
	for (int i = first_name; i <= darkest_secret; i++)
	{
		this->fields_value[i].clear();
		while (!this->fields_value[i].length())
		{
			std::cout << this->fields_name[i] << " > ";
			std::getline(std::cin, this->fields_value[i]);
			if (!std::cin.good())
				return ;
			if (!this->fields_value[i].length())
				std::cout << "! Fields can't be empty !" << std::endl;
		}
	}
}

void	Contact::display_all_fields(void) const
{
	for (int i = first_name; i <= phone_number; i++)
		std::cout << '[' << this->fields_name[i] << "] : \"" << this->fields_value[i] << '"' << std::endl;
}

void	Contact::display_preview_fields(void) const
{
	std::cout << "||" << std::setw(preview_column_width) << this->index << '|';
	for (int i = first_name; i <= nickname; i++)
	{
		if (this->fields_value[i].length() >= (long unsigned int)this->preview_column_width)
			std::cout << this->fields_value[i].substr(0, this->preview_column_width - 1) << '.';
		else
			std::cout << std::setw(this->preview_column_width) << this->fields_value[i];
		std::cout << '|';
	}
	std::cout << '|' << std::endl;
}

void	Contact::set_index(int index)
{
	this->index = index;
}
