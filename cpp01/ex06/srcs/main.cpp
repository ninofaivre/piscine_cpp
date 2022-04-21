/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:50:13 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/21 16:22:11 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <stdlib.h>



int	main(int argc, const char **argv)
{
	Harl	uselessInstance;

	try
	{
		if (argc != 2)
			throw "Bad number of arguments (1 required).";
		uselessInstance.complainsALot(argv[1]);
	}
	catch (const char *error)
	{
		std::cerr << error << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
