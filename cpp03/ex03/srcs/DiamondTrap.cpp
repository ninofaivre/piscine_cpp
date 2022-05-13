/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:43:59 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 14:33:01 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name)
:ClapTrap(name + "_clap_name"), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name"), name(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "A new DiamondTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &otherInst)
:ClapTrap(otherInst.name + "_clap_name"), FragTrap(otherInst.name + "_frag_name"), ScavTrap(otherInst.name + "_scav_name"), name(otherInst.name)
{
	*this = otherInst;
	std::cout << "A new DiamondTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "A DiamondTrap died !" << std::endl
			  << "Say goodbye to " << this->name << " !" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &otherInst)
{
	this->name = otherInst.name;
	this->hitPoints = otherInst.hitPoints;
	this->energyPoints = otherInst.energyPoints;
	this->attackDamage = otherInst.attackDamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
