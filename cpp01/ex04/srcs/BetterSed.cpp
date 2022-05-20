/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BetterSed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:03 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/20 17:48:26 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BetterSed.hpp"
#include <fstream>
#include <string>
#include <iostream>

static std::string	getFileContent(const std::string inputFilePath)
{
	std::string		fileContent;
	std::ifstream	inputFile;
	int				getReturn;

	if (!inputFilePath.length())
		throw "Empty file name.";
	inputFile.open(inputFilePath.c_str());
	if (!inputFile.is_open())
		throw "Input file can't be opened check for rights or existence.";
	while (!inputFile.eof())
	{
		getReturn = inputFile.get();
		if (getReturn >= 0)
			fileContent.push_back(getReturn);
	}
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
