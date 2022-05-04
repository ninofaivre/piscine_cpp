/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/04 14:23:21 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: rawBits(0)
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
