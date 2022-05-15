/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:47:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 14:56:40 by nfaivre          ###   ########.fr       */
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

	virtual void	beExecuted(void) = 0;


public:

	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &otherInst);
	virtual ~Form(void) = 0;

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

	class TryToExecuteUnsignedFormException : public std::exception
	{
	public:
		virtual const char	*what() const throw() { return ("TryToExecuteUnsignedForm"); }
	};

	std::string		getName(void) const;
	bool			isSigned(void) const;
	unsigned int	getGradeToSign(void) const;
	unsigned int	getGradeToExecute(void) const;
	void			beSigned(Bureaucrat bureaucrat);
	void			execute(const Bureaucrat &executor);

};

std::ostream	&operator<<(std::ostream &stream, const Form &inst);
