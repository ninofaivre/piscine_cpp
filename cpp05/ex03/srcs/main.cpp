/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:29:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 15:38:31 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Intern	someRandomIntern;
		Bureaucrat	boss("boss", 1);
		Form	*test;
		test = someRandomIntern.makeForm("presidential pardon", "though criminal");

		std::cout << boss << std::endl
				  << *test << std::endl;
		boss.signForm(*test);
		boss.executeForm(*test);
		delete test;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
