/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:56:58 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 22:27:20 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{

public:

	Cure(void);
	Cure(const Cure &otherInst);
	~Cure(void);

	Cure	&operator=(const Cure &otherInst);

	virtual AMateria	*clone(void) const; 
	virtual void		use(ICharacter &target);

};
