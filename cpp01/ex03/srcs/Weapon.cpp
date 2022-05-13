/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:41:20 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:35:44 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
: type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void				Weapon::setType(const std::string &type)
{
	this->type = type;
}
