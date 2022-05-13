/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:19:24 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 15:34:46 by nfaivre          ###   ########.fr       */
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
	return (0);
}
