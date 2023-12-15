/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:31:33 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/15 12:47:09 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::toPrint(int i, std::string *option) {
	void (Harl::*funcPtr[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	for (int j = i; j < 4; j++)
	{
		std::cout << "[ " + option[j] + " ]" << std::endl;
		(this->*funcPtr[j])();
		std::cout << std::endl;
	}
}

void Harl::complain( std::string level ) {
	std::string option[4] = {"DEBUG","INFO", "WARNING","ERROR"};
	int i = 0;
	while (i < 4)
		if (option[i] == level)
			break;
		else
			i++;
	switch (i)
	{
		case 0:
			toPrint(i, option);
			break;
		case 1:
			toPrint(i, option);
			break;
		case 2:
			toPrint(i, option);
			break;
		case 3:
			toPrint(i, option);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::debug( void ) {
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable!\nI want to speak to the manager now." << std::endl;
}
