/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:05:14 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 13:42:27 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstring>

int	main(void)
{
	std::cout << "Array<int>	test1 (10)" << std::endl;
	Array<int>	test1 (10);
	printArray(test1, "test1");

	std::cout << std::endl
			  << "Fill test1 with int 1" << std::endl;
	for (int i = 0; i < 10; i++)
		test1[i] = 1;
	printArray(test1, "test1");

	std::cout << std::endl
			  << "Array<int>	test2 (10)" << std::endl;
	Array<int>	test2 (10);
	std::cout << "test 1 = test2" << std::endl;
	test1 = test2;
	printArray(test1, "test1");

	std::cout << std::endl
			  << "Fill test2 with int 2" << std::endl;
	for (int i = 0; i < 10; i++)
		test2[i] = 2;
	printArray(test2, "test2");

	std::cout << std::endl
			  << "Array<int>	test3 (test1)" << std::endl;
	Array<int>	test3 (test1);
	printArray(test3, "test3");

	std::cout << std::endl
			  << "Fill test3 with int 3" << std::endl;
	for (int i = 0; i < 10; i++)
		test3[i] = 3;
	printArray(test3, "test3");
	printArray(test1, "test1");

	std::cout << std::endl
			  << "Array< Array<int> >	Roaarrr(2)" << std::endl;
	Array< Array<int> > Roaaarrr(2);
	std::cout << "Roaaarrr[0] = Array<int> (2)" << std::endl
			  << "Roaaarrr[1] = Array<int> (2)" << std::endl
			  << "Roaaarrr[0][0] = 0" << std::endl
			  << "Roaaarrr[0][1] = 1" << std::endl
			  << "Roaaarrr[1][0] = 2" << std::endl
			  << "Roaaarrr[1][1] = 3" << std::endl;
	Roaaarrr[0] = Array<int> (2);
	Roaaarrr[1] = Array<int> (2);
	Roaaarrr[0][0] = 0;
	Roaaarrr[0][1] = 1;
	Roaaarrr[1][0] = 2;
	Roaaarrr[1][1] = 3;
	printArray(Roaaarrr[0], "Roaaarrr[0]");
	printArray(Roaaarrr[1], "Roaaarrr[1]");

	std::cout << std::endl
			  << "Array<std::string>	test4(2)" << std::endl
			  << "test4[0] = \"chaine témoin\"" << std::endl
			  << "test4[1] = \"deuxième chaine témoin\"" << std::endl;
	Array<std::string>	test4(2);
	test4[0] = "chaine témoin";
	test4[1] = "deuxième chaine témoin";
	std::cout << "Array<std::string>	test5(test4)" << std::endl
			  << "test5[0] = \"wrong chaine\"" << std::endl
			  << "test5[1] = \"deuxième wrong chaine\"" << std::endl;
	Array<std::string>	test5(test4);
	test5[0] = "wrong chaine";
	test5[1] = "deuxième wrong chaine";
	std::cout << "Array<std::string>	test6(2)" << std::endl
			  << "test6 = test4" << std::endl
			  << "test6[0] = \"wrong chaine\"" << std::endl
			  << "test6[1] = \"deuxième wrong chaine\"" << std::endl;
	Array<std::string>	test6(2);
	test6 = test4;
	test6[0] = "wrong chaine";
	test6[1] = "deuxième wrong wrong chaine";
	printArray(test4, "test4");
	printArray(test5, "test5");
	printArray(test6, "test6");

	std::cout << std::endl
			  << "Array<char>	test7(4)" << std::endl
			  << "test7[0] = 'a'" << std::endl
			  << "test7[1] = 'b'" << std::endl
			  << "test7[2] = 'c'" << std::endl
			  << "test7[3] = '\\0'" << std::endl;
	Array<char>	test7(4);
	test7[0] = 'a';
	test7[1] = 'b';
	test7[2] = 'c';
	test7[3] = '\0';
	printArray(test7, "test7");
	std::cout << "&test7[0] : " << &test7[0] << std::endl
			  << "strlen(&test7[0]) : " << strlen(&test7[0]) << std::endl;
	try
	{
		std::cout << "test6[2] = \"wrong memory access\"" << std::endl;
		test6[2] = "wrong memory access";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
