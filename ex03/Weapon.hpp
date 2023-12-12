/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:00 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/11 19:27:43 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_
# define _WEAPON_

#include <iostream>

class Weapon {

private:
	std::string _type;

public:
	const std::string& getType();
	void setType(std::string type);
	Weapon(std::string type);
	~Weapon();

};

#endif
