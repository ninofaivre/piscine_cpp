/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:56:58 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/20 10:02:34 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{

public:

	Ice(void);
	Ice(const Ice &otherInst);
	~Ice(void);

	Ice	&operator=(const Ice &otherInst);

	virtual AMateria	*clone(void) const; 
	virtual void		use(ICharacter &target);

};
