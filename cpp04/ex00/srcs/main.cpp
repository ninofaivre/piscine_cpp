/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:24 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/12 12:46:56 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "animal :" << std::endl << std::endl;
	Animal	*animal = new Animal();
	std::cout << std::endl
			  << "type  : " << animal->getType() << std::endl
			  << "sound : ";
	animal->makeSound();
	std::cout << std::endl;
	delete animal;

	std::cout << std::endl << std::endl
			  << "cat :" << std::endl << std::endl;
	Cat	*cat = new Cat();
	std::cout << std::endl
			  << "type  : " << cat->getType() << std::endl
			  << "sound : ";
	cat->makeSound();
	std::cout << std::endl;
	delete cat;

	std::cout << std::endl << std::endl
			  << "aCat :" << std::endl << std::endl;
	Animal	*aCat = new Cat();
	std::cout << std::endl
			  << "type  : " << aCat->getType() << std::endl
			  << "sound : ";
	aCat->makeSound();
	std::cout << std::endl;
	delete aCat;

	std::cout << std::endl << std::endl
			  << "dog :" << std::endl << std::endl;
	Dog	*dog = new Dog();
	std::cout << std::endl
			  << "type  : " << dog->getType() << std::endl
			  << "sound : ";
	dog->makeSound();
	std::cout << std::endl;
	delete dog;

	std::cout << std::endl << std::endl
			  << "aDog :" << std::endl << std::endl;
	Animal	*aDog = new Dog();
	std::cout << std::endl
			  << "type  : " << aDog->getType() << std::endl
			  << "sound : ";
	aDog->makeSound();
	std::cout << std::endl;
	delete aDog;

	std::cout << std::endl << std::endl
			  << "wAnimal :" << std::endl << std::endl;
	WrongAnimal	*wAnimal = new WrongAnimal();
	std::cout << std::endl
			  << "type  : " << wAnimal->getType() << std::endl
			  << "sound : ";
	wAnimal->makeSound();
	std::cout << std::endl;
	delete wAnimal;

	std::cout << std::endl << std::endl
			  << "wCat :" << std::endl << std::endl;
	WrongCat *wCat = new WrongCat();
	std::cout << std::endl
			  << "type  : " << wCat->getType() << std::endl
			  << "sound : ";
	wCat->makeSound();
	std::cout << std::endl;
	delete wCat;

	std::cout << std::endl << std::endl
			  << "awCat :" << std::endl << std::endl;
	WrongAnimal	*awCat = new WrongCat();
	std::cout << std::endl
			  << "type  : " << awCat->getType() << std::endl
			  << "sound : ";
	awCat->makeSound();
	std::cout << std::endl;
	delete awCat;
	return (0);
}
