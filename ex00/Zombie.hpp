/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:33:01 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/10 15:23:32 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
# define _ZOMBIE_
#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	void announce(void);
	Zombie(std::string _name);
	~Zombie( void );
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
