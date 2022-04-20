/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:20:23 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/20 17:12:53 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

static std::string	getFileContent(const std::string inputFilePath)
{
	std::string		fileContent;
	std::ifstream	inputFile;

	if (!inputFilePath.length())
		throw "Empty file name.";
	inputFile.open(inputFilePath.c_str());
	if (!inputFile.is_open())
		throw "Input file can't be opened check for rights or existence.";
	while (!inputFile.eof())
		fileContent.push_back(inputFile.get());
	inputFile.close();
	return (fileContent);
}

static void		replaceString(std::string &fileContent, const std::string little, const std::string replaced)
{
	std::string		buffer;

	while (fileContent.find(little) != std::string::npos)
	{
		buffer = fileContent.substr(fileContent.find(little));
		fileContent = fileContent.substr(0, fileContent.find(little));
		fileContent += replaced;
		fileContent += buffer.substr(little.length());
	}
}

static void		writeOutputFile(const std::string inputFileName, const std::string little, const std::string replaced)
{
	std::string		fileContent;
	std::ofstream	outputFile;

	if (!little.length())
		throw "Empty sequence of characters to replace";
	fileContent = getFileContent(inputFileName);
	replaceString(fileContent, little, replaced);
	outputFile.open((inputFileName + ".replace").c_str());
	if (!outputFile.is_open())
		throw "Output file can't be opened check for rights or existence.";
	outputFile << fileContent;
	outputFile.close();
}

int	main(const int argc, const char **argv)
{
	try
	{
		if (argc != 4)
			throw "Bad Number of arguments (need 3).";
		writeOutputFile(argv[1], argv[2], argv[3]);
	}
	catch (const char *error)
	{
		std::cerr << "Error : " << error << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
