/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:29:32 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 14:40:54 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
:Animal("Dog")
{
	std::cout << "# Dog default constructor called #" << std::endl;
}

Dog::Dog(const Dog &otherInst)
:Animal(otherInst.type)
{
	std::cout << "# Dog copy constructor called #" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "# Dog destructor called #" << std::endl;
}

Dog	&Dog::operator=(const Dog &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOOUUUUUFFFF !!!" << std::endl;
}
