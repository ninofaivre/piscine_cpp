/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:20:23 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/23 13:10:09 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BetterSed.hpp"
#include <stdlib.h>
#include <iostream>

int	main(const int argc, const char **argv)
{
	try
	{
		if (argc != 4)
			throw "Bad Number of arguments (need 3).";
		BetterSed::writeOutputFile(argv[1], argv[2], argv[3]);
	}
	catch (const char *error)
	{
		std::cerr << "Error : " << error << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
