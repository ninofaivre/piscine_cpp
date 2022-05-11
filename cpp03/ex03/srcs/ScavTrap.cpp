/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:26:30 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/11 11:48:01 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "A new ScavTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &otherInst)
: ClapTrap(otherInst.name)
{
	this->hitPoints = otherInst.hitPoints;
	this->energyPoints = otherInst.energyPoints;
	this->attackDamage = otherInst.attackDamage;
	std::cout << "A new ScavTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "A ScavTrap died !" << std::endl
			  << "Say goodbye to " << this->name << " !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &otherInst)
{
	this->name = otherInst.name;
	this->hitPoints = otherInst.hitPoints;
	this->energyPoints = otherInst.energyPoints;
	this->attackDamage = otherInst.attackDamage;
	return (*this);
}

void	ScavTrap::printPreAction(void)
{
	std::cout << "ScavTrap " << this->name;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->isAliveAndAwake())
	{
		std::cout << "It can't attack." << std::endl;
		return ;
	}
	this->energyPoints--;
	this->printPreAction();
	std::cout << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl
			  << "It remains " << this->energyPoints << " energyPoints." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	this->printPreAction();
	std::cout << " has entered in Gate keeper mode !" << std::endl;
}
