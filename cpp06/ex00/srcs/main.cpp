/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:25:33 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/08 16:15:04 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>

int	main(const int argc, const char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments (one and only one needed) !" << std::endl;
		return (EXIT_FAILURE);
	}
	Convert (std::string (argv[1])).displayAll();
	return (EXIT_SUCCESS);
}
