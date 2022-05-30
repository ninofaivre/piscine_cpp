/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:28:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:54:43 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <string>

class HumanA
{

private:

	const std::string	name;
	Weapon				&weapon;


public:

	HumanA(const std::string &name, Weapon &weapon);
	~HumanA(void);

	void	attack(void) const;

};
