/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:26:30 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/11 11:47:07 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string name)
: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "A new FragTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &otherInst)
: ClapTrap(otherInst.name)
{
	this->hitPoints = otherInst.hitPoints;
	this->energyPoints = otherInst.energyPoints;
	this->attackDamage = otherInst.attackDamage;
	std::cout << "A new FragTrap has born !" << std::endl
			  << "Say welcome to " << name << " !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "A FragTrap died !" << std::endl
			  << "Say goodbye to " << this->name << " !" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &otherInst)
{
	this->name = otherInst.name;
	this->hitPoints = otherInst.hitPoints;
	this->energyPoints = otherInst.energyPoints;
	this->attackDamage = otherInst.attackDamage;
	return (*this);
}

void	FragTrap::printPreAction(void)
{
	std::cout << "FragTrap " << this->name;
}

void	FragTrap::attack(const std::string &target)
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

void	FragTrap::highFivesGuys(void)
{
	this->printPreAction();
	std::cout << ", Give me a highFive !" << std::endl;
}
