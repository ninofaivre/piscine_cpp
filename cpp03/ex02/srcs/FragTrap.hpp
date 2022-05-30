/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:21:53 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:57:27 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:

	void	printPreAction(void) const;


public:

	FragTrap(const std::string &name = "Default FragTrap name (no one given)");
	FragTrap(const FragTrap &otherInst);
	~FragTrap(void);

	FragTrap	&operator=(const FragTrap &otherInst);

	void	attack(const std::string &target);
	void	highFivesGuys(void) const;

};
