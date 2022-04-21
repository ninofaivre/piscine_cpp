/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:50:13 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/21 16:30:34 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	test;

	std::cout << "[ WRONG COMPLAIN ]" << std::endl;
	test.complain("nsfk");
	std::cout << std::endl;
	test.complain("DEBUG");
	std::cout << std::endl;
	test.complain("INFO");
	std::cout << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;
	test.complain("ERROR");
	return (0);
}
