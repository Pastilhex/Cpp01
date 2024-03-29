/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:16:09 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/01 15:02:38 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* objs = zombieHorde(5, "ivo");

	if (objs != NULL)
	{
		objs[0].setName("joao");
		std::cout << "Zombie name changed" << std::endl;
		objs[0].announce();

		objs[1].setName("dani");
		std::cout << "Zombie name changed" << std::endl;
		objs[1].announce();

		delete []objs;
	}

	return 0;
}