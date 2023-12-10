/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:39:20 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/10 18:12:41 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
		zombies[i].announce();
	}
	return zombies;
}
