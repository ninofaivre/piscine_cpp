/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:45:26 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/08 21:34:26 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define DEFAULT_MESSAGE "* LOUND AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, const char **argv)
{
	if (argc == 1)
		std::cout << DEFAULT_MESSAGE;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg (argv[i]);
			for (size_t j = 0; j < arg.length(); j++)
				std::cout << (char)std::toupper(arg[j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
