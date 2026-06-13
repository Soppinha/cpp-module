/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:07:25 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 16:28:24 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static std::string replaceAll(const std::string &line, const std::string &s1, const std::string &s2)
{
	std::string result;
	size_t pos = 0;

	while (pos < line.size())
	{
		size_t found = line.find(s1, pos);
		if (found == std::string::npos)
		{
			result += line.substr(pos);
			break;
		}
		result += line.substr(pos, found - pos);
		result += s2;
		pos = found + s1.size();
	}
	return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return 1;
	}

	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: cannot open file '" << filename << "'" << std::endl;
		return 1;
	}

	std::string outFilename = filename + ".replace";
	std::ofstream outFile(outFilename.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: cannot create file '" << outFilename << "'" << std::endl;
		return 1;
	}

	std::string line;
	bool firstLine = true;
	while (std::getline(inFile, line))
	{
		if (!firstLine)
			outFile << "\n";
		outFile << replaceAll(line, s1, s2);
		firstLine = false;
	}

	inFile.close();
	outFile.close();
	return 0;
}
