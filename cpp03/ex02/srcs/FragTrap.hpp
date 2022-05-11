/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:21:53 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/11 15:26:51 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:

	void	printPreAction(void);


public:

	FragTrap(const std::string name);
	FragTrap(const FragTrap &otherInst);
	~FragTrap(void);

	FragTrap	&operator=(const FragTrap &otherInst);

	void	attack(const std::string &target);
	void	highFivesGuys(void);

};

#endif
