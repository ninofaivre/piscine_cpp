/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:21:53 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 14:29:39 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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

#endif
