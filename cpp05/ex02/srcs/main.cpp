/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:29:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 14:52:52 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat	boss ("boss", 1);
		ShrubberyCreationForm	test("TREEEEEE");

		std::cout << boss << std::endl
			 	  << test << std::endl;
		boss.signForm(test);
		boss.executeForm(test);
		boss = Bureaucrat ();
		std::cout << boss << std::endl;
		boss.signForm(test);

		RobotomyRequestForm	lol("slave");
		boss = Bureaucrat ("boss", 1);
		boss.signForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		PresidentialPardonForm	test2("Zaphod");
		boss.executeForm(test2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat	boss ("boss", 1);
	PresidentialPardonForm	test2("Zaphod");
	boss.signForm(test2);
	boss.executeForm(test2);
	return (0);
}
