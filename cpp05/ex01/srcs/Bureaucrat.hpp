/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:40:39 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 08:06:21 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>

# define MAXGRADE 1
# define MINGRADE 150

class Form;

class Bureaucrat
{

private:

	const std::string	name;
	unsigned int		grade;


public:

	Bureaucrat(const std::string &name = "Slave", const int grade = 150);
	Bureaucrat(const Bureaucrat &otherInst);
	~Bureaucrat(void);

	Bureaucrat	&operator=(const Bureaucrat &otherInst);

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw() { return ("GradeTooLow"); }
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw() { return ("GradeTooHigh"); }
	};

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			promote(void);
	void			demote(void);
	void			signForm(Form &form) const;

};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &inst);
