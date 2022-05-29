/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:31:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/29 19:17:01 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(const float x, const float y)
: x(Fixed (x)), y(Fixed (y))
{
}

Point::Point(const Point &otherInst)
: x(otherInst.x), y(otherInst.y)
{
}

Point::~Point(void)
{
}

Point	&Point::operator=(const Point &otherInst)
{
	(void)otherInst;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}
