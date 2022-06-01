/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:17:32 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 17:39:55 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "print.hpp"

int	main(void)
{
	int			intArray[] = {1, 2, 3};
	char		charArray[] = {'a', 'b', 'c'};
	std::string	stringArray[] = {"chaine1", "chaine2", "chaine3"};

	std::cout << "int			intArray[] = {1, 2, 3}" << std::endl
			  << "char			charArray[] = {'a', 'b', 'c'}" << std::endl
			  << "std::string	stringArray[] = {\"chaine1\", \"chaine2\", \"chaine3\"}" << std::endl << std::endl;

	std::cout << "iter(intArray, 3, &print<int>) : " << std::endl;
	iter(intArray, 3, &print<int>);
	std::cout << std::endl << std::endl;
	std::cout << "iter(charArray, 3, &print<char>) : " << std::endl;
	iter(charArray, 3, &print<char>);
	std::cout << std::endl << std::endl;
	std::cout << "iter(stringArray, 3, &print<std::string>) : " << std::endl;
	iter(stringArray, 3, &print<std::string>);
	return (0);
}
