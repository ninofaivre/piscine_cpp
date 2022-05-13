/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:55:30 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:43:47 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMAHB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{

private:

	const std::string	name;
	Weapon				*weapon;


public:

	HumanB(const std::string &name);
	~HumanB(void);

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

};

#endif
