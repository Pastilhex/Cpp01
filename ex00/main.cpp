/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:16:09 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/01 16:15:48 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie obj1("Foo");
	Zombie* obj2 = newZombie("Ivo");

	obj1.announce();
	obj2->announce();

	randomChump("Dani");

	delete obj2;

	return 0;
}