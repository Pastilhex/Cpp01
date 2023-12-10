/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:33:01 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/10 18:07:02 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
# define _ZOMBIE_
#include <iostream>
#include <array>

class Zombie {
private:
	std::string _name;
public:
	void announce(void);
	Zombie(std::string name);
	Zombie ( void );
	~Zombie( void );
	void setName(std::string objName);
};

Zombie* zombieHorde( int N, std::string name );
void deleteHorde(int N, Zombie **zombies);

#endif
