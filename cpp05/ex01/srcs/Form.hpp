/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:47:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 08:10:20 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class Form
{

private:

	const std::string	name;
	bool				signedStatus;
	const unsigned int	gradeToSign;
	const unsigned int	gradeToExecute;


public:

	Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &otherInst);
	~Form(void);

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
	bool			isSigned(void) const;
	unsigned int	getGradeToSign(void) const;
	unsigned int	getGradeToExecute(void) const;
	void			beSigned(Bureaucrat bureaucrat);

};

std::ostream	&operator<<(std::ostream &stream, const Form &inst);
