/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:29:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/14 13:43:39 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat test("Jean", 128);
		std::cout << test << std::endl;
		Bureaucrat lol("Bapt", 1);
		std::cout << lol << std::endl;
		lol = test;
		std::cout << lol << std::endl;
		Bureaucrat test2 (test);
		std::cout << test2 << std::endl;
		test2.promote();
		std::cout << test2 << " " << test << std::endl;
		Bureaucrat test3;
		std::cout << test3 << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "test1" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "other" << std::endl;
	}
	return (0);
}
