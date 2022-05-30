/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:50:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:56:24 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{

private:

int					rawBits;
static const int	nBits = 8;


public:

Fixed(const int num = 0);
Fixed(const float num);
Fixed(const Fixed &otherInst);
~Fixed(void);

Fixed	&operator=(const Fixed &otherInst);

bool	operator<(const Fixed &otherInst) const;
bool	operator>(const Fixed &otherInst) const;
bool	operator<=(const Fixed &otherInst) const;
bool	operator>=(const Fixed &otherInst) const;
bool	operator==(const Fixed &otherInst) const;
bool	operator!=(const Fixed &otherInst) const;

Fixed	operator+(const Fixed &otherInst) const;
Fixed	operator-(const Fixed &otherInst) const;
Fixed	operator*(const Fixed &otherInst) const;
Fixed	operator/(const Fixed &otherInst) const;

Fixed	operator++(void);
Fixed	operator++(int);
Fixed	operator--(void);
Fixed	operator--(int);

void	setRawBits(const int newRawBits);
int		getRawBits(void) const;

float	toFloat(void) const;
int		toInt(void) const;

static Fixed		min(Fixed &firstInst, Fixed &secondInst);
static Fixed		max(Fixed &firstInst, Fixed &secondInst);
static const Fixed	min(const Fixed &firstInst, const Fixed &secondInst);
static const Fixed	max(const Fixed &firstInst, const Fixed &secondInst);

};

std::ostream	&operator<<(std::ostream &stream, Fixed inst);
