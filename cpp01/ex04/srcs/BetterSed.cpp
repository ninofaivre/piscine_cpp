/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BetterSed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:03 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/23 13:10:18 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BetterSed.hpp"
#include <fstream>
#include <string>

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

void			BetterSed::writeOutputFile(const std::string inputFileName, const std::string little, const std::string replaced)
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
