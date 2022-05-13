/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:29:32 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 14:43:37 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
:WrongAnimal("WrongCat")
{
	std::cout << "# WrongCat default constructor called #" << std::endl;
}

WrongCat::WrongCat(const WrongCat &otherInst)
:WrongAnimal(otherInst.type)
{
	std::cout << "# WrongCat copy constructor called #" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "# WrongCat destructor called #" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MEEEOOOWWWWWW !!!" << std::endl;
}
