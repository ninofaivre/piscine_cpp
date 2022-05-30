/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:39:44 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:21:47 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	area(const Point &e1, const Point &e2, const Point &p)
{
	return (Fixed (((e2.getX() - p.getX()) * (e1.getY() - p.getY())) - ((e2.getY() - p.getY()) * (e1.getX() - p.getX()))));
}

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point)
{
	return ((area(a, b, point) > 0 && area(c, a, point) > 0 && area(b, c, point) > 0)
		|| (area(a, b, point) < 0 && area(c, a, point) < 0 && area(b, c, point) < 0));
}
