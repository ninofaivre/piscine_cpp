/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:07:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 06:49:16 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	test;
	Fixed	test2;

	std::cout << test.getRawBits() << std::endl;
	test.setRawBits(10);
	std::cout << test.getRawBits() << std::endl;
	std::cout << test2.getRawBits() << std::endl;
	std::cout << (test2 = test).getRawBits() << std::endl;
	std::cout << test2.getRawBits() << std::endl;
	return (0);
}
