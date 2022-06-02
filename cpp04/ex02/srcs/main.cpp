/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:24 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 13:38:13 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int	main(void)
{
	const Animal	*archeDeNoé[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			archeDeNoé[i] = new Dog;
		else
			archeDeNoé[i] = new Cat;
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; i++)
		delete archeDeNoé[i];
	Cat	*maow = new Cat();
	for (int i = 0; i < 5; i++)
		std::cout << *((*(maow->getBrain()))[i]) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		*((*(maow->getBrain()))[i]) = "test";
	Cat	*maow2 = new Cat();
	for (int i = 0; i < 5; i++)
		std::cout << *((*(maow2->getBrain()))[i]) << std::endl;
	std::cout << std::endl;

	*maow2 = *maow;
	for (int i = 0; i < 5; i++)
		std::cout << *((*(maow2->getBrain()))[i]) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		*((*(maow2->getBrain()))[i]) = "testmaow2";
	for (int i = 0; i < 5; i++)
		std::cout << *((*(maow->getBrain()))[i]) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		std::cout << *((*(maow2->getBrain()))[i]) << std::endl;
	delete maow;
	delete maow2;
	//Animal	a; // Not working anymore
	return (0);
}
