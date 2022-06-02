/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:15:38 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 07:36:12 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int grade)
: name(name)
{
	if (grade < MAXGRADE)
		throw Bureaucrat::GradeTooHighException ();
	else if (grade > MINGRADE)
		throw Bureaucrat::GradeTooLowException ();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &otherInst)
: name(otherInst.name)
{
	*this = otherInst;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &otherInst)
{
	this->grade = otherInst.grade;
	return (*this);
}

std::string		Bureaucrat::getName(void)
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade(void)
{
	return (this->grade);
}

void			Bureaucrat::promote(void)
{
	if (grade - 1 < MAXGRADE)
		throw Bureaucrat::GradeTooHighException ();
	this->grade--;
}

void			Bureaucrat::demote(void)
{
	if (grade + 1 > MINGRADE)
		throw Bureaucrat::GradeTooLowException ();
	this->grade++;
}

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &inst)
{
	stream << "Bureaucrat " << inst.getName() << " is grade " << inst.getGrade();
	return (stream);
}
