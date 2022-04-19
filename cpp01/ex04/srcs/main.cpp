/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:20:23 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/19 23:11:51 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

std::string	getFileContent(const char *filePath)
{
	std::string		fileContent;
	std::ifstream	ifs (filePath);

	if (!ifs.good())
		exit (EXIT_FAILURE);
	while (!ifs.eof())
		fileContent.push_back(ifs.get());
	ifs.close();
	return (fileContent);
}

std::string	replaceString(std::string fileContent, std::string little, std::string replaced)
{
	std::string		buffer;

	while (fileContent.find(little) != std::string::npos)
	{
		buffer = fileContent.substr(fileContent.find(little));
		fileContent = fileContent.substr(0, fileContent.find(little));
		fileContent += replaced;
		fileContent += buffer.substr(little.length());
	}
	return (fileContent);
}

int	main(int argc, const char **argv)
{
	std::string	fileContent;

	if (argc != 4)
		exit (EXIT_FAILURE);
	fileContent = getFileContent(argv[1]);
	fileContent = replaceString(fileContent, std::string (argv[2]), std::string (argv[3]));
	std::ofstream	ofs ((std::string (argv[1]) + std::string ("_replaced")).c_str());
	ofs << fileContent;
	ofs.close();
	return (EXIT_SUCCESS);
}
