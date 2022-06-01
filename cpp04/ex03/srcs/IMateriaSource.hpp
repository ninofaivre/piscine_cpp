/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:45:38 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/20 10:27:13 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class IMateriaSource
{

public:

	virtual	~IMateriaSource(void) {}

	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria	*createMateria(const std::string &type) = 0;

};
