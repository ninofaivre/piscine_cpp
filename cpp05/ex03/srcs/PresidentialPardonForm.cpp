/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:06:59 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 15:01:53 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
: Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &otherInst)
: Form(otherInst.getName(), otherInst.getGradeToSign(), otherInst.getGradeToExecute()), target(otherInst.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::beExecuted(void)
{
	std::cout << this->target << " has beign pardoned by Zaphod Beeblebrox." << std::endl;
}
