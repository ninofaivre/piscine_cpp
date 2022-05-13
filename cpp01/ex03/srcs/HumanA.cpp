/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:35:05 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:43:10 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon)
: name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
