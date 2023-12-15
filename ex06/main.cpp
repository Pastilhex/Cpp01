/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:30:58 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/14 18:54:07 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv) {
	Harl option;
	if (argc == 2)
		option.complain(argv[1]);
	else
		std::cout << "Check your arguments!" << std::endl;
	return 0;
}
