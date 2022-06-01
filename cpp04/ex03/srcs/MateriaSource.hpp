/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:49:02 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/18 20:05:32 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

# define SOURCE_SIZE 4

class MateriaSource : public IMateriaSource
{

private:

	AMateria	*materias[SOURCE_SIZE];
	

public:

	MateriaSource(void);
	MateriaSource(const MateriaSource &otherInst);
	virtual ~MateriaSource(void);

	MateriaSource	&operator=(const MateriaSource &otherInst);

	virtual void		learnMateria(AMateria *materia);
	virtual AMateria	*createMateria(const std::string &type);

};
