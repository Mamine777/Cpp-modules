/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:38:33 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/13 18:42:51 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "ClapTrap.h"


ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	set(name);
	std::cout << "<ScavTrap " << this->name << "> Status: Created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<ScavTrap " << this->name << "> Status: Dead" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "<ScavTrap " << this->name << " is guarding the gates> ";
	std::cout << "Status: Guarding" << std::endl;
}

ScavTrap& 	ScavTrap::operator=(ScavTrap const &other) {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &other) {
            ClapTrap::operator=(other);
        }
        return *this;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "<ScavTrap copy-constructor has been called!> Status: Cloned" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints < 5)
	{
		std::cout << "<ScavTrap " << this->name << " does not have enough energy to attack> ";
		std::cout << "Energy: " << this->energyPoints << " Status: Exhausted" << std::endl;
	}
	else
	{
		this->energyPoints -= 5;
		std::cout << "<ScavTrap " << this->name << " attack " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!> ";
		std::cout << "Energy: " << this->energyPoints << " Status: Atacked" << std::endl;
	}
}