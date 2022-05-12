/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:29:32 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/12 11:51:54 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
:Animal("Cat")
{
	std::cout << "# Cat default constructor called #" << std::endl;
}

Cat::Cat(const Cat &otherInst)
:Animal(otherInst.type)
{
	std::cout << "# Cat copy constructor called #" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "# Cat destructor called #" << std::endl;
}

Cat	&Cat::operator=(const Cat &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "MEEEOOOWWWWWW !!!" << std::endl;
}
