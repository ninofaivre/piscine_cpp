/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:03:07 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/20 10:21:21 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include <string>

#define BACKPACK_SIZE 4

class AMateria;

class Character : public ICharacter
{

private:

	const std::string	name;
	AMateria			*backpack[BACKPACK_SIZE];


public:

	Character(const std::string &name = "Default Character (no one given)");
	Character(const Character &otherInst);
	~Character(void);

	Character	&operator=(const Character &otherInst);

	virtual const std::string	&getName(void) const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);

};
