/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:29:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 08:04:24 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	std::cout << "Breaucrat	test (\"Michel\")" << std::endl;
	Bureaucrat	test ("Michel");
	std::cout << "test : " << test << std::endl;
	try
	{
		std::cout << "test.demote() : ";
		test.demote();
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "test.promote() * 149 : ";
		for (int i = 0; i < 149; i++)
			test.promote();
		std::cout << std::endl
				  << "test : " << test << std::endl
				  << "test.promote() : ";
		test.promote();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Bureaucrat	test2(\"Michel2\", 151)" << std::endl;
		Bureaucrat	test2("Michel", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Bureaucrat	test2(\"Michel2\", 0)" << std::endl;
		Bureaucrat	test2("Michel", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Bureaucrat	testCpy(test)" << std::endl;
	Bureaucrat	testCpy(test);
	std::cout << "testCpy.getGrade() : " << testCpy.getGrade() << std::endl
			  << "testCpy.getName() : " << testCpy.getName() << std::endl;
	return (0);
}
