/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:38:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 13:04:52 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

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

static void	identify(Base &p)
{
	identify(&p);
}

int	main(void)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Base	*p = generate()" << std::endl
				  << std::endl;
		Base	*p = generate();
		std::cout << "identify(p) : ";
		identify(p);
		std::cout << "identify(*p) : ";
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	return (0);
}
