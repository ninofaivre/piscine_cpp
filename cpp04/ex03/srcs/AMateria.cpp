/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:46:05 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/20 10:19:24 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
: type(type)
{
}

AMateria::AMateria(const AMateria &otherInst)
{
	*this = otherInst;
}

AMateria::~AMateria(void)
{
}

AMateria	&AMateria::operator=(const AMateria &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->type);
}
