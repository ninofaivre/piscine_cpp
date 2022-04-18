/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:43:48 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/18 20:17:58 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int	main(void)
{
	{
		Weapon	club ("crude spiked club");
		HumanA	humanA ("HumanA", club);

		humanA.attack();
		club.setType("some other type of club");
		humanA.attack();
	}
	{
		Weapon	club("crude spiked club");
		HumanB	humanB("HumanB");
		
		humanB.attack();
		humanB.setWeapon(club);
		humanB.attack();
		club.setType("some other type of club");
		humanB.attack();
	}

	return (0);
}
