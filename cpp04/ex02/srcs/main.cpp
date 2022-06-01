/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:24 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 00:01:19 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <exception>

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
	//Animal	a; // not more working
	return (0);
}
