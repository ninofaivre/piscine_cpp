/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BetterSed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:03 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/27 00:08:14 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BetterSed.hpp"
#include <fstream>
#include <string>
#include <iostream>

static std::string		getFileContent(const std::string inputFilePath)
{
	std::string		fileContent;
	std::ifstream	inputFile;
	int				getReturn;

	if (!inputFilePath.length())
		throw "Empty file name.";
	inputFile.open(inputFilePath.c_str());
	if (inputFile.fail())
		throw "Input file can't be opened check for rights or existence.";
	while (!inputFile.eof())
	{
		getReturn = inputFile.get();
		if (getReturn >= 0)
			fileContent.push_back(getReturn);
		else
			break ;
	}
	inputFile.close();
	return (fileContent);
}

static std::string		replaceString(std::string oldFileContent, const std::string little, const std::string replaced)
{
	std::string		newFileContent;

	while (oldFileContent.find(little) != std::string::npos)
	{
		newFileContent += oldFileContent.substr(0, oldFileContent.find(little));
		newFileContent += replaced;
		oldFileContent = oldFileContent.substr(oldFileContent.find(little) + little.length());
	}
	newFileContent += oldFileContent;
	return (newFileContent);
}

void					BetterSed::writeOutputFile(const std::string inputFileName, const std::string little, const std::string replaced)
{
	std::string		fileContent;
	std::ofstream	outputFile;

	fileContent = getFileContent(inputFileName);
	if (!fileContent.length())
		throw "Empty File or Directory given as argument";
	if (little != replaced && little.length())
		fileContent = replaceString(fileContent, little, replaced);
	outputFile.open((inputFileName + ".replace").c_str());
	if (!outputFile.is_open())
		throw "Output file can't be opened check for rights or existence.";
	outputFile << fileContent;
	outputFile.close();
}
