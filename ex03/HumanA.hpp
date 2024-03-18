/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:05 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/11 19:51:08 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_
# define _HUMAN_A_

#include "Weapon.hpp"

class HumanA {
public:
	Weapon& myWeapon;
	std::string name;
	void attack(void);
	HumanA(std::string humanName, Weapon& humanWeapon);
	~HumanA();
};

#endif