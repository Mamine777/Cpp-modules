/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:12:04 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/06 19:14:15 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void){

	ClapTrap clap("jacky chan");
	clap.attack("lokaka");
	 clap.takeDamage(3);
    clap.beRepaired(5);
    clap.attack("Another Bandit");
    clap.takeDamage(15);
    clap.beRepaired(3); 
}