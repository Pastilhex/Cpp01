/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:33:01 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/01 14:42:08 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
# define _ZOMBIE_
#include <iostream>
#include <array>

class	Zombie {
private:
	std::string _name;

public:
	void announce(void);
	Zombie(std::string name);
	Zombie ();
	~Zombie();
	void setName(std::string objName);
};

Zombie* zombieHorde( int N, std::string name );

#endif