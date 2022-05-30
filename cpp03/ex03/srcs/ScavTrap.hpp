/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:21:53 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:58:11 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

private:

	void	printPreAction(void) const;


public:

	ScavTrap(const std::string &name = "Default ScavTrap name (no one given)");
	ScavTrap(const ScavTrap &otherInst);
	~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &otherInst);

	void	attack(const std::string &target);
	void	guardGate(void) const;

};
