/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:06:59 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 14:55:50 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form("RobotomyRequestForm", 72, 45), target(target), shunt(false)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &otherInst)
: Form(otherInst.getName(), otherInst.getGradeToSign(), otherInst.getGradeToExecute()), target(otherInst.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::beExecuted(void)
{
	std::cout << "BBZZZZZZZ !!!" << std::endl
			  << this->target
	<< (this->shunt ? " has failed to being robotomized." : " has being robotomized.") << std::endl;
	this->shunt = (!this->shunt);
}
