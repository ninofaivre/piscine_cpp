/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:06:59 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 15:08:05 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &otherInst)
: Form(otherInst.getName(), otherInst.getGradeToSign(), otherInst.getGradeToExecute()), target(otherInst.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::beExecuted(void)
{
	std::ofstream	outputFile;

	outputFile.open((this->target + "_shrubbery").c_str());
	if (!outputFile.is_open())
		throw ShrubberyCreationForm::TouchFileFailed();
	outputFile << TREE;
	outputFile.close();
}
