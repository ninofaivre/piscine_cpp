/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:58:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:43:57 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name)
: name(name), weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his hands cause he doesn't have any weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
