/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:10 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/11 20:21:10 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_B_
# define _HUMAN_B_

#include "Weapon.hpp"

class HumanB {
public:
	Weapon* myWeapon;
	std::string name;
	void setWeapon(Weapon& weapon);
	void attack(void);
	HumanB(std::string humanName);
	~HumanB();
};

#endif
