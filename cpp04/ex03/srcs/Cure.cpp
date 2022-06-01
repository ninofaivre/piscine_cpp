/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:02:09 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 22:29:15 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void)
: AMateria("cure")
{
}

Cure::Cure(const Cure &otherInst)
: AMateria(otherInst.getType())
{
}

Cure::~Cure(void)
{
}

Cure	&Cure::operator=(const Cure &otherInst)
{
	(void)otherInst;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure ());
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
