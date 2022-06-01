/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:54:15 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 22:40:26 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < SOURCE_SIZE; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &otherInst)
{
	for (int i = 0; i < SOURCE_SIZE; i++)
		materias[i] = (otherInst.materias[i]) ? otherInst.materias[i]->clone() : NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < SOURCE_SIZE; i++)
		if (this->materias[i])
			delete this->materias[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &otherInst)
{
	for (int i = 0; i < SOURCE_SIZE; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = (otherInst.materias[i]) ? otherInst.materias[i]->clone() : NULL;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < SOURCE_SIZE; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia->clone();
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < SOURCE_SIZE; i++)
		if (this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	return (NULL);
}
