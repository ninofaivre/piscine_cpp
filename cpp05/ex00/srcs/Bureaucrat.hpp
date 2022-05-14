/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:40:39 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/14 13:36:58 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

# define MAXGRADE 1
# define MINGRADE 150

class Bureaucrat
{

private:

	const std::string	name;
	unsigned int		grade;


public:

	Bureaucrat(const std::string name = "Slave", const int grade = 150);
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

	std::string		getName(void);
	unsigned int	getGrade(void);
	void			promote(void);
	void			demote(void);

};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &inst);
