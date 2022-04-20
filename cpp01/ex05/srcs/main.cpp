/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:50:13 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/20 18:59:37 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	test;

	std::cout << "wrong complain :" << std::endl;
	test.complain("nsfk");
	std::cout << std::endl << "debug complain :" << std::endl;
	test.complain("DEBUG");
	std::cout << std::endl << "info complain :" << std::endl;
	test.complain("INFO");
	std::cout << std::endl << "warning complain :" << std::endl;
	test.complain("WARNING");
	std::cout << std::endl << "error complain :" << std::endl;
	test.complain("ERROR");
	return (0);
}
