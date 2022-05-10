/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/05 12:55:17 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
: rawBits(0)
{
}

Fixed::Fixed(const int num)
: rawBits(num << Fixed::nBits)
{
}

Fixed::Fixed(const float num)
: rawBits(roundf(num * (1 << Fixed::nBits)))
{
}

Fixed::Fixed(const Fixed &otherInst)
: rawBits(otherInst.getRawBits())
{
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(const Fixed &otherInst)
{
	this->rawBits = otherInst.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(const int newRawBits)
{
	this->rawBits = newRawBits;
}

int		Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (float)(1 << Fixed::nBits));
}

int		Fixed::toInt(void) const
{
	return (this->rawBits >> Fixed::nBits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed &inst)
{
	stream << inst.toFloat();
	return (stream);
}
