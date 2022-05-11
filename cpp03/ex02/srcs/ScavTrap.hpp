/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:21:53 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/11 11:10:36 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

private:

	void	printPreAction(void);


public:

	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &otherInst);
	~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &otherInst);

	void	attack(const std::string &target);
	void	guardGate(void);

};

#endif
