/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:07:36 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/29 19:28:12 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include <iostream>

int	main(void)
{
	std::cout << bsp(Point (5, 5), Point (10, 0), Point (0, 0), Point (4, 3)) << std::endl;
	return (0);
}
