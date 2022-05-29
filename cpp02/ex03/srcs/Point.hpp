/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:28:33 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/29 19:15:43 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"

class Point
{

private:

	const Fixed	x;
	const Fixed	y;


public:

	Point(const float x = 0, const float y = 0);
	Point(const Point &otherInst);
	~Point(void);

	Point	&operator=(const Point &otherInst);

	Fixed	getX(void) const;
	Fixed	getY(void) const;

};
