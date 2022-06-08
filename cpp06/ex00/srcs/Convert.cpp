/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:13:17 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/08 16:28:16 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <climits>

Convert::Convert(void)
: value(0)
{
}

Convert::Convert(const std::string &data)
: value(strtod(data.c_str(), NULL))
{
	if (data.length() == 3 && data.at(0) == '\'' && data.at(2) == '\'')
		this->value = static_cast<double>(data.at(1));
}

Convert::Convert(const Convert &otherInst)
{
	*this = otherInst;
}

Convert::~Convert(void)
{
}

Convert	&Convert::operator=(const Convert &otherInst)
{
	this->value = otherInst.value;
	return (*this);
}

void	Convert::displayAll(void) const
{
	this->displayChar();
	this->displayInt();
	this->displayFloat();
	this->displayDouble();
}

void	Convert::displayChar(void) const
{
	char	c = static_cast<char>(this->value);

	std::cout << "char: ";
	if (std::isinf(this->value) || std::isnan(this->value) || this->value < SCHAR_MIN || this->value > SCHAR_MAX)
		std::cout << "impossible";
	else if  (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << '\'' << c << '\''; 
	std::cout << std::endl;
}

void	Convert::displayInt(void) const
{
	int	i = static_cast<int>(this->value);

	std::cout << "int: ";
	if (std::isinf(this->value) || std::isnan(this->value))
		std::cout << "impossible";
	else if (this->value > INT_MAX || this->value < INT_MIN)
		std::cout << "overflow";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	Convert::displayFloat(void) const
{
	float	f = static_cast<float>(this->value);

	std::cout << "float: ";
	std::cout << f;
	if (f == static_cast<int>(this->value))
		std::cout << ".0";
	std::cout << 'f' << std::endl;
}

void	Convert::displayDouble(void) const
{
	std::cout << "double: ";
	std::cout << this->value;
	if (this->value == static_cast<int>(this->value))
		std::cout << ".0";
	std::cout << std::endl;
}
