/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:15:00 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/12 12:33:05 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "# WrongAnimal default constructor called #" << std::endl;
	this->type.clear();
}

WrongAnimal::WrongAnimal(const std::string type)
: type(type)
{
	std::cout << "# WrongAnimal type constructor called #" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &otherInst)
: type(otherInst.type)
{
	std::cout << "# WrongAnimal copy constructor called #" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "# WrongAnimal destructor called #" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

std::string	WrongAnimal::getType(void)
{
	return (this->type);
}

void		WrongAnimal::makeSound(void)
{
	std::cout << "You know, I no dot really exist by my own..." << std::endl;
}
