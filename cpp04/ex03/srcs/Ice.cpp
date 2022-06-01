/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:02:09 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 22:47:16 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void)
: AMateria("ice")
{
}

Ice::Ice(const Ice &otherInst)
: AMateria(otherInst.getType())
{
}

Ice::~Ice(void)
{
}

Ice	&Ice::operator=(const Ice &otherInst)
{
	(void)otherInst;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice ());
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
