/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:37:26 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:57:50 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{

private:

	std::string	name;


public:

	DiamondTrap(const std::string &name = "Default DiamondTrap name (no one given)");
	DiamondTrap(const DiamondTrap &otherInst);
	~DiamondTrap(void);

	DiamondTrap	&operator=(const DiamondTrap &otherInst);

	void	attack(const std::string &target);
	void	whoAmI(void) const;
};
