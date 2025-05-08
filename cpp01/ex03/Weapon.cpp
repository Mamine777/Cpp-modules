/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:20:29 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/28 14:25:14 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}
