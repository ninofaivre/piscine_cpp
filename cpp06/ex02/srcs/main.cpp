/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:38:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/08 17:35:44 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>

// I know it is not really random but It's enough for this exercise
static Base	*generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		std::cout << "generate generated a new A" << std::endl;
		return (new A());
	case 1:
		std::cout << "generate generated a new B" << std::endl;
		return (new B());
	case 2:
		std::cout << "generate generated a new C" << std::endl;
		return (new C());
	default:
		return (NULL);
	}
}

static void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << 'C' << std::endl;
}

// probably better than :
// static void identify(Base &p) { identify(&p); }
static void	identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << 'A' << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << 'B' << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << 'C' << std::endl;
	}
	catch (std::exception &e) {}
}

int	main(void)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Base	*p = generate()" << std::endl;
		Base	*p = generate();
		std::cout << std::endl;
		std::cout << "identify(p) : ";
		identify(p);
		std::cout << "identify(*p) : ";
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	return (0);
}
