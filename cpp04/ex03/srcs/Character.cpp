/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:11:05 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 22:45:30 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(const std::string &name)
: name(name)
{
	for (int i = 0; i < BACKPACK_SIZE; i++)
		this->backpack[i] = NULL;
}

Character::Character(const Character &otherInst)
: name(otherInst.name)
{
	for (int i = 0; i < BACKPACK_SIZE; i++)
		this->backpack[i] = (otherInst.backpack[i]) ? otherInst.backpack[i]->clone() : NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < BACKPACK_SIZE; i++)
	{
		if (this->backpack[i])
			delete this->backpack[i];
	}
}

Character	&Character::operator=(const Character &otherInst)
{
	for (int i = 0; i < BACKPACK_SIZE; i++)
	{
		if (this->backpack[i])
			delete this->backpack[i];
		this->backpack[i] = (otherInst.backpack[i]) ? otherInst.backpack[i]->clone() : NULL;
	}
	return (*this);
}
		
const std::string	&Character::getName(void) const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < BACKPACK_SIZE; i++)
	{
		if (!this->backpack[i])
		{
			this->backpack[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < BACKPACK_SIZE)
		this->backpack[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < BACKPACK_SIZE && this->backpack[idx])
		this->backpack[idx]->use(target);
}
