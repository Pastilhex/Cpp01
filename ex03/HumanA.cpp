/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:08 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/11 19:47:53 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon& humanWeapon) : name(humanName), myWeapon(humanWeapon) {}

HumanA::~HumanA(){}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->myWeapon.getType() << std::endl;
}