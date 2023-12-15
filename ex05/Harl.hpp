/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:43:22 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/14 17:36:30 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_
# define _HARL_

#include <iostream>

class Harl {
private:
	void debug( void );
	void info( void );
	void warning ( void );
	void error( void );
	
public:
	void complain( std::string level );

};


#endif
