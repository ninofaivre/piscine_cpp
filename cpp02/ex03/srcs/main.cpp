/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:07:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:17:28 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point);

int	main(void)
{
	Point test[10] =
	{
		Point (4, 3),
		Point (4, 4),
		Point (3, 3),
		Point (5, 5),
		Point (0, 0),
		Point (0.1f, 0.01f),
		Point (0.1f, 0.1f),
		Point (-1, 3),
		Point (6, 5),
		Point (6.f, 3.9f)
	};
	std::cout << "Test avec un triangle dont les sommets sont (5, 5), (10, 0), (0, 0), les sommets"
			  << " sont donnés dans tous les ordres à bsp." << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl
				  << "Le point test est : (" << test[i].getX() << ", " << test[i].getY() << ")." << std::endl
				  << '['
				  << bsp(Point (5, 5), Point (10, 0), Point (0, 0), test[i]) << ';'
				  << bsp(Point (5, 5), Point (0, 0), Point (10, 0), test[i]) << ';'
				  << bsp(Point (10, 0), Point (5, 5), Point (0, 0), test[i]) << ';'
				  << bsp(Point (10, 0), Point (0, 0), Point (5, 5), test[i]) << ';'
				  << bsp(Point (0, 0), Point (10, 0), Point (5, 5), test[i]) << ';'
				  << bsp(Point (0, 0), Point (5, 5), Point (10, 0), test[i]) << ']' << std::endl;
	}
	return (0);
}
