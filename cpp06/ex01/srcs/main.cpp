/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:47:15 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 12:08:46 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

static uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

static Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data local1 (42);
	Data *ptr1 = &local1;
	Data local2 (21);
	Data *ptr2 = &local2;
	std::cout << "Data local1 (42)" << std::endl
			  << "Data *ptr1 = &local1" << std::endl
			  << "Data local2 (21)" << std::endl
			  << "Data *ptr2 = &local2" << std::endl
			  << std::endl
			  << "local1.getValue() : " << local1.getValue() << std::endl
			  << "ptr1->getValue() : " << ptr1->getValue() << std::endl
			  << "(*deserialize(serialize(ptr1))).getValue() : " << (*deserialize(serialize(ptr1))).getValue() << std::endl
			  << "deserialize(serialize(ptr1))->getValue() : " << deserialize(serialize(ptr1))->getValue() << std::endl
			  << std::endl;

	uintptr_t	serialized1 = serialize(ptr1);
	uintptr_t	serialized2 = serialize(ptr2);

	std::cout << "uintptr_t serialized1 = serialize(ptr1)" << std::endl
			  << "uintptr_t serialized2 = serialize(ptr2)" << std::endl
			  << std::endl;

	std::cout << "deserialize(serialized1 = serialized2)->getValue() : " << deserialize(serialized1 = serialized2)->getValue() << std::endl;
	std::cout << "deserialize(serialized1)->getValue() : " << deserialize(serialized1)->getValue() << std::endl
			  << "deserialize(serialized2)->getValue() : " << deserialize(serialized2)->getValue() << std::endl;
	return (0);
}
