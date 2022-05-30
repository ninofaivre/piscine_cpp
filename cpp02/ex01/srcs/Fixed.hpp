/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:50:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 06:50:13 by nfaivre          ###   ########.fr       */
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

void	setRawBits(const int newRawBits);
int		getRawBits(void) const;

float	toFloat(void) const;
int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed &inst);
