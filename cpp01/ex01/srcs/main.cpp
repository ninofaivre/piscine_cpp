/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:19:22 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/15 22:46:28 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "# Zombie	*horde = Zombie::zombieHorde(10, \"Zombs\") #" << std::endl;
	Zombie	*horde = Zombie::zombieHorde(10, "Zombs");

	std::cout << std::endl
			  << "# delete horde #" << std::endl;
	delete [] horde;
	std::cout << std::endl
			  << "# exiting main #" << std::endl;
	return (0);
}
