/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:19:22 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/15 20:25:44 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "# creation of stack_zombs #" << std::endl;
	Zombie stack_zombs("stack_zombs");
	std::cout << std::endl
			  << "# creation of heap_zombs #" << std::endl;
	Zombie	*heap_zombs = Zombie::newZombie("heap_zombs");

	std::cout << std::endl
			  << "# stack_zombs.announce() #" << std::endl;
	stack_zombs.announce();
	std::cout << std::endl
			  << "# heap_zombs.announce() #" << std::endl;
	heap_zombs->announce();
	std::cout << std::endl
			  << "# randomChump(\"temporary_stack_zombs\") #" << std::endl;
	Zombie::randomChump("temporary_stack_zombs");

	std::cout << std::endl
			  << "# deletion of heap_zombs #" << std::endl;
	delete heap_zombs;
	std::cout << std::endl
			  << "# exiting main #" << std::endl;
	return (0);
}
