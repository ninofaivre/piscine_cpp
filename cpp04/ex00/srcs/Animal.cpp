/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:15:00 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/12 11:58:54 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "# Animal default constructor called #" << std::endl;
	this->type.clear();
}

Animal::Animal(const std::string type)
: type(type)
{
	std::cout << "# Animal type constructor called #" << std::endl;
}

Animal::Animal(const Animal &otherInst)
: type(otherInst.type)
{
	std::cout << "# Animal copy constructor called #" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "# Animal destructor called #" << std::endl;
}

Animal	&Animal::operator=(const Animal &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

std::string	Animal::getType(void)
{
	return (this->type);
}

void		Animal::makeSound(void)
{
	std::cout << "You know, I no dot really exist by my own..." << std::endl;
}
