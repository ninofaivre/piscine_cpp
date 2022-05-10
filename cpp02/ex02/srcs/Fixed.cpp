/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/10 13:17:34 by nfaivre          ###   ########.fr       */
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

bool	Fixed::operator<(const Fixed &otherInst) const
{
	return (this->rawBits < otherInst.getRawBits());
}

bool	Fixed::operator>(const Fixed &otherInst) const
{
	return (this->rawBits > otherInst.getRawBits());
}

bool	Fixed::operator<=(const Fixed &otherInst) const
{
	return (this->rawBits <= otherInst.getRawBits());
}

bool	Fixed::operator>=(const Fixed &otherInst) const
{
	return (this->rawBits >= otherInst.getRawBits());
}

bool	Fixed::operator==(const Fixed &otherInst) const
{
	return (this->rawBits == otherInst.getRawBits());
}

bool	Fixed::operator!=(const Fixed &otherInst) const
{
	return (this->rawBits != otherInst.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &otherInst) const
{
	Fixed	sum;

	sum.setRawBits(this->rawBits + otherInst.getRawBits());
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &otherInst) const
{
	Fixed	difference;

	difference.setRawBits(this->rawBits - otherInst.getRawBits());
	return (difference);
}

Fixed	Fixed::operator*(const Fixed &otherInst) const
{
	Fixed	product;

	product.setRawBits((long)this->rawBits * otherInst.getRawBits() / (1 << Fixed::nBits));
	return (product);
}

Fixed	Fixed::operator/(const Fixed &otherInst) const
{
	Fixed	quotient;

	quotient.setRawBits(((long)this->rawBits * (1 << Fixed::nBits)) / otherInst.getRawBits());
	return (quotient);
}

Fixed	Fixed::operator++(void)
{
	this->rawBits += (1 << Fixed::nBits);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	oldInst (*this);
	operator++();
	return (oldInst);
}

Fixed	Fixed::operator--(void)
{
	this->rawBits -= (1 << Fixed::nBits);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	oldInst (*this);
	operator--();
	return (oldInst);
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

Fixed Fixed::min(Fixed &firstInst, Fixed &secondInst)
{
	return ((firstInst.getRawBits() < secondInst.getRawBits()) ? firstInst : secondInst);
}

Fixed Fixed::max(Fixed &firstInst, Fixed &secondInst)
{
	return ((firstInst.getRawBits() > secondInst.getRawBits()) ? firstInst : secondInst);
}

const Fixed Fixed::min(const Fixed &firstInst, const Fixed &secondInst)
{
	return ((firstInst.getRawBits() < secondInst.getRawBits()) ? firstInst : secondInst);
}

const Fixed Fixed::max(const Fixed &firstInst, const Fixed &secondInst)
{
	return ((firstInst.getRawBits() > secondInst.getRawBits()) ? firstInst : secondInst);
}

std::ostream	&operator<<(std::ostream &stream, Fixed inst)
{
	stream << inst.toFloat();
	return (stream);
}
