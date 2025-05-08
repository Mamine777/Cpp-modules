/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:12:49 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/03 09:57:33 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

Weapon noWeapon("No weapon");

HumanB::~HumanB(){}

HumanB::HumanB(std::string name) : _name(name){}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
