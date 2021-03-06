/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:50:57 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 06:46:55 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{

private:

int					rawBits;
static const int	nBits = 8;


public:

Fixed(void);
Fixed(const Fixed &otherInst);
~Fixed(void);

Fixed	&operator=(const Fixed &otherInst);

void	setRawBits(const int newRawBits);
int		getRawBits(void) const;

};
