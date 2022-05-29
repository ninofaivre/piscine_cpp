/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:39:44 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/29 19:27:32 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	poulet(const Point &e1, const Point &e2, const Point &p)
{
	Fixed res = ((e2.getX() - p.getX()) * (e1.getY() - p.getY())) - ((e2.getY() - p.getY()) * (e1.getX() - p.getX()));
	return (res);
}

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point)
{
	if (poulet(a, b, point) > 0 && poulet(c, a, point) > 0 && poulet(b, c, point) > 0)
		return (true);
	else if (poulet(a, b, point) < 0 && poulet(c, a, point) < 0 && poulet(b, c, point) < 0)
		return (true);
	return (false);
}
