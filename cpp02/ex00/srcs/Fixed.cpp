/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 13:41:11 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: rawBits(0)
{
}

Fixed::Fixed(const Fixed &otherInst)
{
	*this = otherInst;
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(const Fixed &otherInst)
{
	this->rawBits = otherInst.rawBits;
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
