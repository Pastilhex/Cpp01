/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:03 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/11 17:33:32 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(){
	return this->_type;
}

void Weapon::setType(std::string type){
	this->_type = type;
}

Weapon::Weapon(std::string type){
	this->setType(type);
}

Weapon::~Weapon(){
	return ;
}
