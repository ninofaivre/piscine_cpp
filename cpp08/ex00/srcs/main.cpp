/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:15:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/19 16:11:25 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

template <typename T>
void	customPrint(const T toPrintIt, const T diffIt)
{
	if (toPrintIt != diffIt)
		std::cout << *toPrintIt << std::endl;
	else
		std::cerr << "not found !" << std::endl;
}

int	main(void)
{
	{
		std::list<int>	testInt;

		testInt.push_back(1);
		testInt.push_back(2);
		testInt.push_back(3);
		testInt.push_back(4);
		customPrint(easyfind(testInt, 1), testInt.end());
		customPrint(easyfind(testInt, 4), testInt.end());
		customPrint(easyfind(testInt, 999), testInt.end());

		std::list<char>	testChar;
		testChar.push_back('a');
		testChar.push_back('b');
		testChar.push_back('c');
		testChar.push_back('d');
		customPrint(easyfind(testChar, 'a'), testChar.end());
		customPrint(easyfind(testChar, 'd'), testChar.end());
		customPrint(easyfind(testChar, 'z'), testChar.end());
	}
	std::cout << std::endl;
	{
		std::vector<int>	testInt;

		testInt.push_back(1);
		testInt.push_back(2);
		testInt.push_back(3);
		testInt.push_back(4);
		customPrint(easyfind(testInt, 1), testInt.end());
		customPrint(easyfind(testInt, 4), testInt.end());
		customPrint(easyfind(testInt, 999), testInt.end());

		std::vector<char>	testChar;
		testChar.push_back('a');
		testChar.push_back('b');
		testChar.push_back('c');
		testChar.push_back('d');
		customPrint(easyfind(testChar, 'a'), testChar.end());
		customPrint(easyfind(testChar, 'd'), testChar.end());
		customPrint(easyfind(testChar, 'z'), testChar.end());
	}
	return (0);
}
