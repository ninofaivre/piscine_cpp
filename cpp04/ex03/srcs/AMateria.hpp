/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:39:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/20 11:40:32 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include <string>

class AMateria
{

private:

	std::string	type;


public:

	AMateria(const std::string &type = "Default Materia (no one given)");
	AMateria(const AMateria &otherInst);
	virtual ~AMateria(void);

	AMateria	&operator=(const AMateria &otherInst);

	const std::string	&getType(void) const;
	virtual AMateria	*clone(void)  const = 0;
	virtual void		use(ICharacter &target) = 0;

};
