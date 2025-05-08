/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:08:41 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/03 09:54:29 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

HumanA::~HumanA(){}

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _weapon(Weapon){}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}