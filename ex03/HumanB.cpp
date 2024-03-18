/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:13 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/12 10:47:40 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : name(humanName), myWeapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack(void)
{
	if (this->myWeapon != NULL)
		std::cout << this->name << " attacks with their " << this->myWeapon->getType() << std::endl;
	else
		std::cout << "Cannot attack" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->myWeapon = &weapon;
}