/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:07:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 06:54:46 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	test (42);

	std::cout << "Fixed test (42)" << std::endl << std::endl
			  << "test.toInt() : " << test.toInt() << std::endl
			  << "test.toFloat() : " << test.toFloat() << std::endl << std::endl << std::endl;
	test = Fixed (42.42f);
	std::cout << "test = Fixed (42.42f)" << std::endl << std::endl
			  << "test.toInt() : " << test.toInt() << std::endl
			  << "test.toFloat() : " << test.toFloat() << std::endl << std::endl << std::endl
			  << "std::cout << test << \" test\" : " << test << " test" << std::endl;
	Fixed test2 (test);
	std::cout << "Fixed test2 (test)" << std::endl
			  << test2 << std::endl;
	return (0);
}
