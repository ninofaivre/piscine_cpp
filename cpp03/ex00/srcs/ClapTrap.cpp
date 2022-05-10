/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:26:35 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/10 18:39:02 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name)
: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "A new ClapTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "A ClapTrap died !" << std::endl
			  << "Say goodbye to " << this->name << " !" << std::endl;
}

bool	ClapTrap::isAliveAndAwake(void)
{
	if (this->hitPoints && this->energyPoints)
		return (true);
	this->printPreAction();
	std::cout << " is out of " << (this->hitPoints ? "energyPoints" : "hitPoints") << "!" << std::endl;
	return (false);
}

void	ClapTrap::printPreAction(void)
{
	std::cout << "ClapTrap " << this->name;
}

void	ClapTrap::attack(const std::string &target)
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

void	ClapTrap::takeDamage(const unsigned int amount)
{
	if (!this->isAliveAndAwake())
	{
		std::cout << "It can't take damage." << std::endl;
		return ;
	}
	this->printPreAction();
	std::cout << " take " << ((amount > this->hitPoints) ? this->hitPoints : amount);
	this->hitPoints -= (this->hitPoints < amount) ? this->hitPoints : amount;
	std::cout << " points of damage, it remains " << this->hitPoints << " hitPoints." << std::endl;
}

void	ClapTrap::beRepaired(const unsigned int amount)
{
	if (!this->isAliveAndAwake())
	{
		std::cout << "It can't be repaired." << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	this->printPreAction();
	std::cout << " is repairing for " << amount << " hitPoints, it remains " << this->hitPoints << " hitPoints and " << this->energyPoints << " energyPoints." << std::endl;
}
