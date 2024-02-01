/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:09:55 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/01 14:42:38 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie (std::string objName)
{
	this->_name = objName;
}

Zombie::Zombie ( void )
{
	return;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->_name << " destroyd." << std::endl;
}

void Zombie::setName(std::string objName) {
	this->_name = objName;
}
