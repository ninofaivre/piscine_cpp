/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:29:32 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 15:27:39 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
:Animal("Dog"), ptrBrain(new Brain ())
{
	std::cout << "# Dog default constructor called #" << std::endl;
}

Dog::Dog(const Dog &otherInst)
:Animal(otherInst.type), ptrBrain(new Brain (*otherInst.ptrBrain))
{
	std::cout << "# Dog copy constructor called #" << std::endl;
}

Dog::~Dog(void)
{
	delete ptrBrain;
	std::cout << "# Dog destructor called #" << std::endl;
}

Dog	&Dog::operator=(const Dog &otherInst)
{
	*this->ptrBrain = *otherInst.ptrBrain;
	this->type = otherInst.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOOUUUUUFFFF !!!" << std::endl;
}
