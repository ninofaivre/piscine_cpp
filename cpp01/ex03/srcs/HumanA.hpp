/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:28:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/18 19:58:32 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{

private:

	const std::string	name;
	Weapon				&weapon;


public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);

};

#endif
