/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:13:39 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/19 19:27:46 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	{
		Span	test (3);

		test.addNumber(-100);
		test.addNumber(2);
		test.addNumber(9);
		try
		{
			test.addNumber(999);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	{
		Span	test (10);

		test.addNumber(999);
		try
		{
			std::cout << test.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << test.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int>	tmp (9999, 2);
		Span				test (10000);

		test.addNumber(tmp.begin(), tmp.end());
		test.addNumber(5);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
		try
		{
			test.addNumber(999);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int>	tmp (10, 0);
		Span				test (10);

		test.addNumber(999);
		try
		{
			test.addNumber(tmp.begin(), tmp.end());
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		test.addNumber(++tmp.begin(), tmp.end());
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	return (0);
}
