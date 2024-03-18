/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:56:18 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/13 14:12:11 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
	std::string filename, s1, s2, readedLine;
	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::size_t s1Size = s1.size();
		std::ifstream fileIn;
		fileIn.open(filename);
		if (fileIn.is_open())
		{
			std::ofstream fileOut;
			fileOut.open(filename + ".replace");
			if (fileOut.is_open())
			{
				while (fileIn)
				{
					getline(fileIn, readedLine, '\0');
					std::size_t searchPosition = readedLine.find(s1);
					while (searchPosition != std::string::npos)
					{
						readedLine.erase(searchPosition, s1Size);
						readedLine.insert(searchPosition, s2);
						searchPosition = readedLine.find(s1);
					}
					if (fileIn)
						fileOut << readedLine;
				}
				fileOut.close();
			}
			fileIn.close();
		}
		else
		{
			std::cout << "File not found." << std::endl;
			return 0;
		}
	}
	else
		std::cout << "Error: Check your arguments" << std::endl;
	return 0;
}