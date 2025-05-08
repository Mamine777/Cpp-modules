/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:10:24 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/12 20:12:29 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "ClapTrap.h"

int main()
{
	ScavTrap clap("loka");
	ScavTrap Daniel("no name");
	std::cout << "Hitpoints: " << Daniel.getHitPoints() << " ";
	std::cout << "Energy: " << Daniel.getEnergyPoints() << " ";
	std::cout << "Attack Damage: " << Daniel.getAttackDamage() << " ";
	std::cout << "Status: Active" << std::endl;
}
