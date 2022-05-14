/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:58:35 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/14 18:24:19 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
: name(name), signedStatus(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < MAXGRADE || gradeToExecute < MAXGRADE)
		throw Form::GradeTooHighException ();
	else if (gradeToSign > MINGRADE || gradeToExecute > MINGRADE)
		throw Form::GradeTooLowException ();
}

Form::Form(const Form &otherInst)
: name(otherInst.name), signedStatus(otherInst.signedStatus), gradeToSign(otherInst.gradeToSign), gradeToExecute(otherInst.gradeToExecute)
{
}

Form::~Form(void)
{
}

std::string		Form::getName(void) const
{
	return (this->name);
}

bool			Form::isSigned(void) const
{
	return (this->signedStatus);
}

unsigned int	Form::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

unsigned int	Form::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

void			Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException ();
	else
		this->signedStatus = true;
}

std::ostream	&operator<<(std::ostream &stream, const Form &inst)
{
	stream << "Form " << inst.getName() << " is " << (inst.isSigned() ? "signed" : "not signed") << ". The grade to sign it is " << inst.getGradeToSign() << ", the grade to execute it is " << inst.getGradeToExecute();
	return (stream);
}
