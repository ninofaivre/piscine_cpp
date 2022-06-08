/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:47:15 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/08 17:20:22 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

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
	Data local1 (0);
	Data *ptr1 = &local1;
	Data local2 (21);
	Data *ptr2 = &local2;
	local1.print();
	ptr1->print();
	(*deserialize(serialize(ptr1))).print();

	uintptr_t	serialized1 = serialize(ptr1);
	uintptr_t	serialized1Cpy = serialized1;
	uintptr_t	serialized2 = serialize(ptr2);

	(deserialize(serialized1 = serialized2))->print();
	/* same thing than :
	serialized1 = serialized2;
	Data  *tmp = deserialize(serialized1);
	tmp->print();
	*/
	deserialize(serialized1Cpy)->print();
	deserialize(serialized2)->print();
	return (0);
}
