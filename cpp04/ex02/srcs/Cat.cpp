/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:29:32 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 15:27:59 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
:Animal("Cat"), ptrBrain(new Brain ())
{
	std::cout << "# Cat default constructor called #" << std::endl;
}

Cat::Cat(const Cat &otherInst)
:Animal(otherInst.type), ptrBrain(new Brain (*otherInst.ptrBrain))
{
	std::cout << "# Cat copy constructor called #" << std::endl;
}

Cat::~Cat(void)
{
	delete ptrBrain;
	std::cout << "# Cat destructor called #" << std::endl;
}

Cat	&Cat::operator=(const Cat &otherInst)
{
	*this->ptrBrain = *otherInst.ptrBrain;
	this->type = otherInst.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEEEOOOWWWWWW !!!" << std::endl;
}
