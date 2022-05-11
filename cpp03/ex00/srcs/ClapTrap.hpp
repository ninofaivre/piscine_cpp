/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:38:37 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/11 11:28:21 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{

private:
	
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

	bool	isAliveAndAwake(void);
	void	printPreAction(void);


public:
	
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &otherInst);
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &otherInst);

	void	attack(const std::string &target);
	void	takeDamage(const unsigned int amount);
	void	beRepaired(const unsigned int amount);

};

#endif
