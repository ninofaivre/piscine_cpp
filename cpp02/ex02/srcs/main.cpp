/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:07:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/10 13:21:47 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	std::cout << "Simple comparisons and operations tests :" << std::endl << std::endl
			  << "(Fixed (5) > Fixed (6)) : "
			  << (Fixed (5) > Fixed (6)) << std::endl
			  << "(Fixed (5) < Fixed (6)) : "
			  << (Fixed (5) < Fixed (6)) << std::endl
			  << "(Fixed (5) >= Fixed (6)) : "
			  << (Fixed (5) >= Fixed (6)) << std::endl
			  << "(Fixed (5) <= Fixed (6)) : "
			  << (Fixed (5) <= Fixed (6)) << std::endl
			  << "(Fixed (5) == Fixed (6)) : "
			  << (Fixed (5) == Fixed (6)) << std::endl
			  << "(Fixed (5) != Fixed (6)) : "
			  << (Fixed (5) != Fixed (6)) << std::endl
			  << "(Fixed (5) + Fixed (6)) : "
			  << (Fixed (5) + Fixed (6)) << std::endl
			  << "(Fixed (5) - Fixed (6)) : "
			  << (Fixed (5) - Fixed (6)) << std::endl
			  << "(Fixed (5) * Fixed (6)) : "
			  << (Fixed (5) * Fixed (6)) << std::endl
			  << "(Fixed (5) / Fixed (6)) : "
			  << (Fixed (5) / Fixed (6)) << std::endl
			  << "(Fixed (2.5f) * Fixed (2)) : "
			  << (Fixed (2.5f) * Fixed (2)) << std::endl
			  << std::endl << "Overflow on operations tests :" << std::endl << std::endl
			  << "(Fixed (900) * Fixed (1000)) : "
			  << (Fixed (900) * Fixed (1000)) << std::endl
			  << "(Fixed (99999999) / Fixed (99999999)) : "
			  << (Fixed (99999999) / Fixed (99999999)) << std::endl
			  << std::endl << "Incr and Decr tests :" << std::endl << std::endl;
	Fixed test;
	std::cout << "Fixed test;" << std::endl
			  << "test : " << test << std::endl
			  << "test++ : " << test++ << std::endl
			  << "test : " << test << std::endl
			  << "++test : " << ++test << std::endl
			  << "test : " << test << std::endl
			  << "test-- : " << test-- << std::endl
			  << "test : " << test << std::endl
			  << "--test : " << --test << std::endl
			  << "test : " << test << std::endl
			  << std::endl << "min & max tests :" << std::endl << std::endl;
	Fixed	testbis (10);
	std::cout << "Fixed testbis (10);" << std::endl
			  << "Fixed::min(test, testbis) : " << Fixed::min(test, testbis) << std::endl
			  << "Fixed::max(test, testbis) : " << Fixed::max(test, testbis) << std::endl;
	const Fixed	cTest (0);
	const Fixed	cTestbis (10);
	std::cout << "const Fixed cTest (0);" << std::endl
			  << "const Fixed cTestbis (10);" << std::endl
			  << "Fixed::min(cTest, cTestbis) : " << Fixed::min(cTest, cTestbis) << std::endl
			  << "Fixed::max(cTest, cTestbis) : " << Fixed::max(cTest, cTestbis) << std::endl;
	return (0);
}
