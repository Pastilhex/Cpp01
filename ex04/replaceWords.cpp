/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:57:00 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/12 14:25:20 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void replaceWords(std::string filename,std::string s1,std::string s2,std::string readedLine)
{
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
        return ;
    }
}