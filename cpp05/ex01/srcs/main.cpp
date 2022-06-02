/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:29:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 14:37:46 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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
		std::cout << std::endl
				  << "test.promote() * 149 : ";
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
		std::cout << std::endl
				  << "Bureaucrat	test2(\"Michel2\", 151)" << std::endl;
		Bureaucrat	test2("Michel", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl 
				  << "Bureaucrat	test2(\"Michel2\", 0)" << std::endl;
		Bureaucrat	test2("Michel", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl
			  << "Bureaucrat	testCpy(test)" << std::endl;
	Bureaucrat	testCpy(test);
	std::cout << "testCpy.getGrade() : " << testCpy.getGrade() << std::endl
			  << "testCpy.getName() : " << testCpy.getName() << std::endl;
	std::cout << "Form	testForm(\"Useless Form\", 150, 150\")" << std::endl;
	Form	testForm("Useless Form", 150, 150);
	std::cout << "testForm.getName() : " << testForm.getName() << std::endl
			  << "testForm.isSigned() : " << testForm.isSigned() << std::endl
			  << "testForm.getGradeToExecute() : " << testForm.getGradeToExecute() << std::endl;
	std::cout << "testCpy.signForm(testForm)" << std::endl;
	testCpy.signForm(testForm);
	std::cout << testForm << std::endl;
	try
	{
		std::cout << std::endl
				  << "Form	bossForm(\"Boss Form\", 11, 11)" << std::endl
				  << "Bureaucrat	slave" << std::endl;
		Form	bossForm("Boss Form", 11, 11);
		Bureaucrat	slave;
		std::cout << bossForm << std::endl
				  << slave << std::endl
				  << "slave.signForm(bossForm)" << std::endl;
		slave.signForm(bossForm);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl
				  << "Form	bossForm(\"Boss Form\", 11, 11)" << std::endl
				  << "Bureaucrat	boss(\"boss\", 10)" << std::endl;
		Form	bossForm("Boss Form", 11, 11);
		Bureaucrat	boss("boss", 10);
		std::cout << bossForm << std::endl
				  << boss << std::endl
				  << "boss.signForm(bossForm)" << std::endl;
		boss.signForm(bossForm);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
